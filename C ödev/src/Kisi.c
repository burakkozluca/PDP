#include "Kisi.h"
#include "Oyun.h"

void ekle(char *isim, double para,double kacpara,int sanslisayi)
{
    curr->isim = isim;
    curr->para = para;
    curr->kacpara = kacpara;
    curr->sanslisayi = sanslisayi;

    Node *tmp = (Node*)malloc(sizeof(Node));

    tmp->next = NULL;
    curr->next = tmp;

    //printf("Eklenen Kisi : %s %f %f %d\n",curr->isim,curr->para,curr->kacpara,curr->sanslisayi);

    curr = curr->next;
}

void satiriAyir(char *satir)
{
    char *kelime = NULL;
    char **parca;
    char *isim;
    double para,kacpara;
    int sanslisayi;
    kelime = strtok (satir,"\n");
    while (kelime != NULL)
    {   
        parca = ft_split(kelime,'#');
        isim = *parca;
        para = atof(*(parca+1));
        kacpara = atof(*(parca+2));
        sanslisayi = atoi(*(parca+3));
        ekle(isim,para,kacpara,sanslisayi);
        kelime = strtok (NULL, "\n");
    }
}

void dongu(int sanslisayi,float masabakiye_yedek)
{
    while(tmp != NULL)
        {
            float yenipara;
            float kacpara;
            if(sanslisayi == tmp->sanslisayi)
            {
                //printf("\nbaşarılı");
                //printf("%f\n",tmp->para);
                yenipara = tmp->para;
                kacpara = tmp->kacpara;
                yenipara = yenipara*kacpara*10;
                masabakiye_yedek = masabakiye_yedek-yenipara;
                Mb->masabakiye = masabakiye_yedek;
                tmp->para = yenipara;

                //Mb->masabakiye = yenipara;
                //printf("%f",masabakiye_yedek);
                //printf("\n%f\n",tmp->para);
                //yatırdığı para miktarının yüzdesi var onu ekle(eklendi)
            }
            else
            {
                yenipara = tmp->para;
                kacpara = tmp->kacpara;
                yenipara = yenipara - (yenipara*kacpara);
                masabakiye_yedek = masabakiye_yedek+yenipara;
                Mb->masabakiye = masabakiye_yedek;
                tmp->para = yenipara;

                if(yenipara < 1000)
                {   
                    //eleman silme
                    // Node *onceki = NULL;
                    // Node *sonraki = NULL;
                    // if(tmp->next->next != NULL)
                    // {
                    // sonraki = tmp->next->next;
                    // onceki = tmp;
                    // free(tmp->next);
                    // onceki->next = sonraki;
                    // }
                }
            }
            
            tmp = tmp->next;
            //çalıştı nice
            //oyun içinde masa parametresi oluştur masa bakiyesi 0 olarak ata
            //kazananların parası masadan ödenmektedir.
            // C timer araştır ekrana yazdırma kısmında timer yap
        }
}