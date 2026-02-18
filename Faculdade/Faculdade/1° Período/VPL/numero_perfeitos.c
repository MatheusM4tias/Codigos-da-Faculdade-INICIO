#include<stdio.h>

int main(){
    int vStart, i=0, soma=0;
    printf("Digite um número: ");
    scanf("%d", vStart);
    while(i<=vStart){
        if((vStart%i)==0){
            soma=soma+vStart;
        }
        i++;
    }
    if(soma == vStart) printf("É um número perfeito.");
    return 0;
}