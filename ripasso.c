#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 5

int main(void){
    int vett[DIM];
    for(int i=0; i<DIM; i++){
        vett[i] = 0;
    }
    for(int i=0; i<DIM; i++){
        printf("Inserisci il [%d] valore: ",i+1);
        scanf("%d", &vett[i]);

    }

    int min = vett[0]; // assegno la prima altezza al valore minimo
    for(int i=1; i<DIM; i++){
        if(vett[i] < min)
            min = vett[i];
    }
    printf("il valore minimo è: %d" ,min);
    return(0);
}
