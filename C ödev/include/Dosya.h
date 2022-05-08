#ifndef DOSYA_H
#define DOSYA_H

#include <string.h>
#include "fonksiyon.h"

struct DOSYA
{
    char *dosya_ad;
};
typedef struct DOSYA* Dosya;

void DosyaOku(char* dosya_ad);

#endif