#ifndef OYUN_H
#define OYUN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct
{
    float masabakiye;
}OYUN;
OYUN *Mb;
void print_game(int sanslisayi,int tur,float masabakiye,char* zenginkisi,float bakiye);
int zenginkisibakiye();
char *zenginkisi();
void delay(int number_of_seconds);

#endif