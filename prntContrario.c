#include <stdio.h>
#include "lib_stringa.c"


void prntContrario(char str[]){
    int len = lunghezzaStringa(str);

    for(int i=0; i < len; i++){
        printf("%c", str[len-i-1]);
    }
}

int main(void){
    char s[]= "riccardo"; 
    stampaContrario(s);

    return 0;
}