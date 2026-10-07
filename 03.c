#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lib.h"
#include "lib.c"

#define DIM 15

int main(void){

    srand(time(NULL));
    int vett[DIM];
    for(int i=0; i<DIM; i++){
        vett[i] = 1 + (rand() % 25);
    }
    printRowArray(vett, DIM);
    maxVal(vett, DIM);
    int val=0;
    printf("inserisci un numero: ");
    scanf("%d" ,&val);
    printf("il valore inserito si ripete %d volte! \n", trovaVal(vett, DIM, val));

    int val2=0;
    int sost=0;
    printf("inserisci src: ");
    scanf("%d" ,&val2);
    printf("inserisci un numero per sostituire src: ");
    scanf("%d" ,&sost);
    printf("il valore inserito è stato sostituito %d volte!", sostSrc(vett, DIM, val2, sost));
    
    return(0);
}
