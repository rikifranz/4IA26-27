#include <stdio.h>

/** void strcpy(char dst[], char src[]): ricopia la stringa sorgente src[] nella destinazione dst[] */
#define ST	'\0'

void strcpy2(char dst[], char src[]){
    int i;
    for(i=0; src[i] != ST; i++){
        dst[i] = src[i];
    }
	
}

#define DIM 	128

int main(void) {
	char src[] = "copia me, copia me!";
	char dst[DIM];

	strcpy2(dst, src);

	
	printf("la copia della stringa src \"%s\" è dst \"%s\"\n", src, dst);

	return 0;
}