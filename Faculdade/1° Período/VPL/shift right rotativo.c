#include<stdio.h>

int main(){

    int N;

    scanf("%d", &N); //tamanho da sequencia que vou ler

    int RodaRoda[N];
    for(int m=0; m<N; m++) RodaRoda[m] = 0;
    for(int i=1; i < N+1; i++){

        int numero; 

        scanf("%d", &numero);
            if(numero >= 0 && numero <= 10) RodaRoda[i] = numero;
            //printf("%d", RodaRoda[i]);
    }
    RodaRoda[0] = RodaRoda[N];
    
    /*for(int j=0; j < N; j++){
        printf("%d", RodaRoda[j]);
    }*/

    return 0;
}