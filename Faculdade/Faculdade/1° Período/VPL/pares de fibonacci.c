#include<stdio.h>
int main(){
    int x;
    int a=1,b=1, c;
    int soma=0;

    scanf("%d", &x); //saber a quantidade de termos da sequencia de fibonacci
     
    while(c<x){
        c = a+b;
        a = b;
        b = c;
            if(c%2 == 0){
                soma = soma + c;
            }
        c=a+b;
    }
    printf("%d", soma);
    return 0;
}