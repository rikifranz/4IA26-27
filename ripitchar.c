#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool repeatedChars(char s[]){
    for(int i = 1; s[i]!='\0'; i++){
        for(int j = i+1; s[j]!='\0'; j++){
            if(s[i] == s[j]){
                return true;
            }
        }
    }
    return false;
}

int main(void){
    char s[] = "carlo";
    if(repeatedChars(s)==true)
        printf("ci sono caratteri ripetuti");

    printf("non ci sono caratteri ripetuti");

    return 0;
}