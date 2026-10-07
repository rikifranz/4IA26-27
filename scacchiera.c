//Per casa: completare, provare su github 
//e condividere qui il sorgente di
//scacchieraM(): verifica se una matrice quadrata di
// interi è una "scacchiera", ovvero se vi sono presenti 
//solo 0 e 1 alternati tra loro;
#include <stdio.h>
#include <stdbool.h>

bool scacchieraM(int _l, int _m[_l][_l]){
    for(int i=0; i<l; i++){
        for(int j=0; j<l; j++){
            if(_m[i][j] != (i+j) % 2){
                return false;
            }
        }
    }
    return true;
}

#define DIM 8
int main (){

    int m[DIM][DIM] = {
        {0,1,0,1,0,1,0,1},
        {1,0,1,0,1,0,1,0},
        {0,1,0,1,0,1,0,1},
        {1,0,1,0,1,0,1,0},
        {0,1,0,1,0,1,0,1},
        {1,0,1,0,1,0,1,0},
        {0,1,0,1,0,1,0,1},
        {1,0,1,0,1,0,1,0}
    };

    if(scacchieraM( DIM, m)==true){
        printf("\nè una scacchiera!\n");
    }
    else{
        printf("\n Non è una scacchiera\n");
    }
}