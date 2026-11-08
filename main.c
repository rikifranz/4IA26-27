#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lib_verifica.c"
#include "lib_verifica.h"

#define DIM 5

int main(void){
    int mat[DIM][DIM];
    int min = 5;
    int max = 20;
    int vett[DIM];

    CreaMatrice(DIM, DIM, mat, min, max);
    CreaVett(vett, DIM, min, max);

    PrintMatrix(DIM, DIM, mat);
    printf("\n\n");

    PrintVett(vett, DIM);
    printf("\n\n");

    MediaRigheMatrice(DIM, DIM, mat);
    printf("\n\n");

    ContaColonneMinore(DIM, DIM, mat, vett, DIM);
    printf("\n\n");


}
