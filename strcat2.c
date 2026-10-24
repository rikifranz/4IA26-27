#include <stdio.h>
#include <stdlib.h>

#define ST '\0'

void strcat2(char* dst, char* s){
    int i=0;
    for(i=0; dst[i] != ST; i++){
        if(dst[i] == dst[ST-1]){
            for(i=0; s[i] != ST; i++){
                dst[i+1] = s[i];
            }
        }
    }
}

int main(void){
    char dst[] = "Ciao il mio nome ";
    char s[] = "è Riccardo";

    strcat2(dst, s);

    printf("%s%s", dst, s);

    return 0;
}