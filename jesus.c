#include <stdio.h>
#include <stdbool.h>
#include "lib.c"

#define DIM 5

int main(void){
    int m[DIM][DIM]= {
        {10, 5, 1, 7, 4},
        {5, 0, 5, 6, 8},
        {1, 20, 7, 12, 4},
        {1, 20, 7, 12, 4},
        {1, 20, 7, 12, 4},
    };
    int vett[DIM]= {1, 20, 7, 12, 4};

    if(jesus(DIM, DIM, m, vett)== true){
        printf("giusto");
    }else{
        printf("merda");
    }
}
