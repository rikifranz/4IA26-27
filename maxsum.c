#include <stdio.h>

void maxSumM(int l, int m[l][l], int *max, int *somma){
    *max = m[0][0];
    *somma = 0;

    for (int i = 0; i < l; i++){
        for (int j = 0; j < l; j++){
            *somma += m[i][j];

            if (m[i][j] > *max)
                *max = m[i][j];
        }
    }
}

int main(){
    int m[3][3] = {
        {4, 2, 1},
        {2, 9, 4},
        {4, 7, 8}
    };

    int max;
    int somma;

    maxSumM(3, m, &max, &somma);

    printf("Il valore massimo è: %d\n", max);
    printf("La somma degli elementi è: %d\n", somma);

    return 0;
}