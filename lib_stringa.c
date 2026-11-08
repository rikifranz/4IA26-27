#include <stdio.h>
#include "lib_stringa.h"


void initStringa(int dim, char str[]){
    int i;
    for(i=0; i< dim; i++){
        str[i] = '\0';
    }
}

int strLen(int dim, char str[]){
    int len = 0;
    while(str[len] != '\0')
        len++;

    return len;
}