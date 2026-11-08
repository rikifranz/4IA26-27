#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool substrAtpos(char s[], int pos, char subString[]){
    for(int i=0; subString[i]!='\0'; i++){
        if(s[pos+i] == '\0' || s[pos+i] != subString[i])
            return false;
    }
    return true;
}

int main(void){
    char s[] = "io sono alberto";
    char sub[] = "albe";

    if(substrAtpos(s, 8, sub))
        printf("funziona");

    printf("funziona lo stesso");
    
    return 0;
}

