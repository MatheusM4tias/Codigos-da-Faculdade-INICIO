#include<stdio.h>
#define Max 50

int main(){
    int vet[Max],i=0,n,x;

    vet[0]=0, vet[1]=1;
    
    for(i=2; i < Max; i++){
        vet[i]= vet[i-1] + vet[i-2];
    }

    scanf("%d", &n); //qual o termo da sequencia vc deseja ?

    for(i=0; i < n; i++){
        scanf("%d", &x);
        printf("fib(%d)=%d\n",x, vet[x]);
    }
    
    return 0;   
}