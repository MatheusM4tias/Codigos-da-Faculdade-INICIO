#include<stdio.h>
int main(){

    int x;
    scanf("%d", &x);

    int vetA[x], i=0, menor=0;
    for(i=0; i<x; i++){
        scanf("%d", &vetA[i]);
        printf("%d", vetA[i]);
    }  
    return 0;
}