#include<stdio.h>
int main(){
    long long int numero = 600851475143;
    int i, cont=0;
    int FatorPrimo[10000] ={0};

    for(i=2; i <= numero; i++){
        if(numero % i == 0){
            FatorPrimo[cont] = i;
            cont++;
            numero = numero / i;
        }
    }
    for(i=0; i < cont; i++){
        printf("%d ", FatorPrimo[i]); // o maior fator primo é o que está no indice 3
    }
    
    return 0;
}