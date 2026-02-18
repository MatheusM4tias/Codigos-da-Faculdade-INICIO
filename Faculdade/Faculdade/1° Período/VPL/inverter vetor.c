#include<stdio.h>
int main(){
    int x,i=0;

        scanf("%d", &x);
    int vetA[x];
    for(i=0; i<x; i++){
        scanf("%d", &vetA[i]);
    }
    for(i=x - 1; i>=0; i--){
        printf("%d ", vetA[i]);
    }

    return 0;
}