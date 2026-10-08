#include <stdio.h>
#include <stdbool.h>

bool diagSum(int l, int m[l][l]){
    int p=0;
    int s=0;

    for(int i=0; i<l;i++){
        p +=m[i][i];
        s+=m[i][l-(1+i)];
    }    
    if(p==s) return true;
    else return false;
}

#define l 5
int main(){
    int m[l][l]={
        {2,1,1,1,2},
        {1,2,1,2,1},
        {1,1,2,1,1},
        {1,2,1,2,1},
        {1,1,1,1,2}
    };

    
    
   if(diagSum(l,m)) printf("\nvero\n");
   else printf("\nfalso\n");
  

}