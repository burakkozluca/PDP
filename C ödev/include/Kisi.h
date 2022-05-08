#ifndef KISI_H
#define KISI_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonksiyon.h"

struct KISI
{
    char *isim;
    double para;
    double kacpara;
    int sanslisayi;
    struct KISI * next;
};
typedef struct KISI Node;
Node *curr, *head, *tmp;

void ekle(char *isim, double para,double kacpara,int sanslisayi);
void satiriAyir(char *satir);
void dongu(int sanslisayi,float masabakiye_yedek);

#endif