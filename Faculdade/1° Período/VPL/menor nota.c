#include<stdio.h>
int main(){
    int q, n, menor=10, i=0;

    scanf("%d", &q);
    for(i=0;i<q; i++){
        scanf("%d", &n);
        if(n<10 && n>=0 && n<menor){
            menor=n;
        }
    }
    printf("%d", menor);
    return 0;
}