/* provare a creare le funzioni per le seguenti richieste:
1. Calcolo del valor medio della matrice.
2. Stampa della matrice con somma totale di ogni singola riga.
3. Somma totale del triangolo inferiore e del triangolo superiore.
*/

/*
    Realizza una funzione che riceve una matrice e un vettore con numero di celle
    pari al numero di colonne della matrice.
    La funzione restituisce 0/1 verificando se il vettore è uguale ad almeno
    una riga della matrice.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lib.c"

#define DIM 10

int main(void){
    int m[DIM][DIM];

    triangoloM(DIM, m);

    return(0);
}