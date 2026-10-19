//FUNZIONI 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "lib.h"

void manualInputArray(int _v[], int _dim){
 int i;
 char junk;
 for(i=0; i<_dim; i++){
 printf("Inserisci il [%d] valore: ", i+1);
 scanf("%d", &_v[i]);
 junk = getchar();
 }
}

void randomInputArray(int _v[], int _dim){
 for(int i=0; i<_dim; i++){
 // genero altezze da 150 a 190 (intesi come centimetri)
 _v[i] = 1 + (rand() % 99);
 }
}

void printRowArray(int _v[], int _dim){
 for(int i=0; i<_dim; i++){
 printf("%d ", _v[i]);
 }
}

void printColArray(int _v[], int _dim){
 for(int i=0; i<_dim; i++){
 printf("[%d]= %d", i, _v[i]);
 printf("\n");
 }
}

void maxVal(int _vett[], int _dim){
    int _max=0;
    for(int i=0; i<_dim; i++){
        if(_vett[i] > _max){
            _max = _vett[i];
        }
    }
    printf("\n");
    printf("%d è il valore massimo! \n" ,_max);
}

int trovaVal(int _vett[], int _dim, int _val){
    int _cnt=0;
    for(int i=0; i<_dim; i++){
        if(_vett[i] == _val){
            _cnt++;
        }
    }
    return(_cnt);
}

int sostSrc(int _vett[], int _dim, int _val, int _sost){
    int _cnt=0;
    for(int i=0; i<_dim; i++){
        if(_vett[i] == _val){
            _vett[i] = _sost;
            _cnt++;
            printf("%d " , _vett[i]);
        }else{
            printf("%d " , _vett[i]);
        }
    }
    return(_cnt);
}

void printMatrix(int _row, int _cols, int _mat[_row][_cols]){
    for(int i=0; i< _row; i++){
        for(int j=0; j< _cols; j++){
            printf("%3d" , _mat[i][j]);
        }
        printf("\n");
    }
}

void printDiag(int _row, int _cols, int _mat[_row][_cols]){
    for(int i=0; i< _row; i++){
        for(int j=0; j< _cols; j++){
            _mat[i][j] = 0;
            if(i==j){
                _mat[i][j] = 1;
            }
            printf("%3d" , _mat[i][j]);
        }
        printf("\n");
    }
}

bool MatSimm(int _row, int _cols, int _mat[_row][_cols]){
    for(int i=0; i< _row; i++){
        for(int j=0; j< _cols; j++){
            if(_mat[i][j] != _mat[j][i]){
                return(false);
            }
            }
        }
        return(true);
}

void caricavettore(int _v[], int _dim, int _min, int _max){
    int i;
    srand(time(NULL));

    for(i=0; i<_dim; i++){
        _v[i] = _min + rand() % (_max - _min +1);
    }
}

float mediaVett(int _v[], int _dim){
    float media=0;
    for(int i=0; i<_dim; i++){
        media = media + _v[i];
    }
    return(media/_dim);
}

void ScacchieraMa(int _dim, int _m[_dim][_dim]){
    for(int i=0; i<_dim; i++){
        for(int j=0; j<_dim; j++){
            if((i+j)%2==0){
                _m[i][j] = 0;
            }else{
                _m[i][j] = 1;
            }
        }
    }
}


float MediaM(int r, int c, int m[r][c]){
    int sum=0;
    float media = 0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sum = sum + m[i][j];
        }
    }
    media = (float)sum / (r*c);
    return media;
}

void triangoloM(int DIM, int m[DIM][DIM]){
    for(int i = 0; i<DIM; i++){
        for(int j = 0; j<DIM; j++){
            if(i<j){
                m[i][j]= 1;
                printf("%d", m[i][j]);
            }else{
                if(i==j){
                    m[i][j] = 5;
                    printf("%d", m[i][j]);
                }else{
                    m[i][j] = 0;
                    printf("%d", m[i][j]);
                }
            }
        }
        printf("\n");
    }
}

bool jesus(int r, int c, int m[r][c], int vett[c]){
    int cnt;
    for(int i=0; i<r; i++){
        int cnt=0;
        for(int j=0; j<c; j++){
            if(m[i][j]== vett[c]){
                cnt++;
            }
        }
        if(cnt == c){
            return(true);
        }
    }
    return(false);
}

void DuplicaS(char str[], char Dstr[]){
    int ST= '\0';
    int i;
    for(i=0; i != ST; i++){
        str[i] = Dstr[i];
        printf("%s " ,str);
        printf("%s2" ,Dstr);
    }
}

