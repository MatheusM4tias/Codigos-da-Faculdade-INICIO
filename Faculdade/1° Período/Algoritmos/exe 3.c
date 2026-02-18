#include<stdio.h> //calcula a media dos numeros pares digitados, ignora os ìmpares e encerra quando ler o 0
int main(){
int a;
int soma=0,contpar=0;

printf("ME FALA OS NUMEROS ANJO\n");
scanf("%d", &a);
    while(a!=0){
        if(a%2==0){
            soma=soma+a;
            contpar=contpar+1;
        }
scanf("%d",&a);
    }
    printf("%d", soma/contpar);
return 0;

}