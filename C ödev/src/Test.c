#include "Kisi.h"
#include "fonksiyon.h"
#include "Oyun.h"

int main()
{   
    curr = (Node *)malloc(sizeof(Node));
    curr->next = NULL;
    head = curr;
    FILE *fp = fopen("./doc/Kisiler.txt","r");
    char satir[1000];
    while (fgets( satir, sizeof(satir),fp )){
        satiriAyir(satir);
    }
    fclose(fp);
    FILE *fp1 = fopen("./doc/Sayilar.txt","r");
    char satir1[3];

    OYUN *Mb;
    Mb = (OYUN *)malloc(sizeof(OYUN));

    float masabakiye_yedek = 0;
    //şurayı bir fonksiyona ata, oyuncu bitmemişse fonksiyonu tekrar tekrar çağır.
    int tur = 1;
    while(fgets(satir1, sizeof(satir1),fp1))
    {
        int sanslisayi;
        sanslisayi = atoi(ft_substr(satir1,0,2));
        delay(200);

        //okunan sanslisayiyi her kişiye uygulama(oldu)
        Node *tmp = head;

        dongu(sanslisayi,Mb->masabakiye);
        //Bağlı listeden en çok parası olanı bulma algoritması
        int a = zenginkisibakiye();
        //char *b = zenginkisi();
        system("cls");
        system("clear");
        print_game(sanslisayi,tur,Mb->masabakiye,"burak",a);
        tur++;
    }
    fclose(fp1);
    return 0;
}