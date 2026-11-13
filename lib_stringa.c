#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


void initStringa(int dim, char str[]){
    int i;
    for(i=0; i < dim; i++)
        str[i] = '\0';
}

int lunghezzaStringa(char str[]){
    int len;
    len = 0;
    while(str[len] != '\0')
        len++;
    
    return len;
}

void stampaContrario(char str[]){
    int i;     
    int len;

    len = lunghezzaStringa(str);   
    for(i=0; i < len; i++){
        printf("%c", str[len-i-1]);
    }
}

int contaCarattere(char str[], char src){
    int i;      
    int len;    
    int cnt;    

    len = lunghezzaStringa(str);
    cnt = 0;
    for(i=0; i<len; i++){
        if(str[i] == src) 
            cnt++;
    }

    return cnt;
}

