#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "lib.c"
#include "lib.h"

#define DIM 5


int main(void){
    int m[DIM][DIM]= {
        {10, 5, -1},
        {5, 0, 5},
        {-1, 20, 7},
    };

   if(MatSimm(DIM, DIM, m) == (true)){
    printf("la matrice è simmetrica");
   }else{
    printf("la matrice non è simmetrica");
   }
    return(0);
}

/*
int main(void){
    int m[DIM][DIM];

    printDiag(DIM, DIM, m);
    return(0);
}

*/