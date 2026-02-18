#include<stdio.h> // le o fatorial de um numero
int main(){ 
int x;
int fator;
int i=0;

printf("digite o valor que deseja fatorar.");
scanf("%d", &x);
fator=1;


while(i <= x){
        fator=fator*i;
        i--;
    }
printf("o resultado da fatoracao e: %d", fator);
return 0;

}