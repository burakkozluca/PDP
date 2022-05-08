#include "Oyun.h"
#include <limits.h>
#include "Kisi.h"
#include <stdlib.h>
#include <time.h>

void print_game(int sanslisayi,int tur,float masabakiye,char* zenginkisi,float bakiye)
{
    printf("##################################\n");
    printf("###       SANSLI SAYI:%-d      ###\n",sanslisayi);
    printf("##################################\n");
    printf("##################################\n");
    printf("###       TUR:%d               ###\n",tur);
    printf("###      MASA BAKIYE: %-f      ###\n",masabakiye);
    printf("###                            ###\n");
    printf("###----------------------------###\n");
    printf("###      EN ZENGIN KISI        ###\n");
    printf("###       %s                   ###\n",zenginkisi);
    printf("###     BAKIYESI:%f            ###\n",bakiye);
    printf("###                            ###\n");
    printf("##################################\n");
}
int zenginkisibakiye()
{
    int max = INT_MAX;
    while (head != NULL) {
        if (max < head->para)
            max = head->para;
        head = head->next;
    }
    return max;
}
char *zenginkisi()
{
    int max = INT_MAX;
    while (head != NULL) {
        if (max < head->para)
            max = head->para;
        head = head->next;
    }
    return (head->isim);
}

void delay(int number_of_seconds)
{
	// Converting time into milli_seconds
	int milli_seconds = 1000 * number_of_seconds;

	// Storing start time
	clock_t start_time = clock();

	// looping till required time is not achieved
	while (clock() < start_time + milli_seconds)
		;
}
