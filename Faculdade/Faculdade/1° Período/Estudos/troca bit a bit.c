#include<stdio.h>
int main(){
int a;
int b; 
    
printf("informe os valores inteiros entre 1 e 100:\n");
scanf("%d %d", &a,&b); //tenho que trocar os valores bit a bit

a = a ^ b;
b = a ^ b;
a = a ^ b;

    
printf("O valor atual de a eh %d, o valor atual de b eh %d\n", a,b);
 
return 0;
}