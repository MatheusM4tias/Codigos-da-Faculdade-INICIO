#include<stdio.h>

int Somavet(int*vet){
    int i, soma = 0;
        for(i=0; i<10; i++){
                soma += vet[i];
        }
    return soma;
}

int main(){
    int z, i;
    int vet[10];

        for(i=0; i< 10; i++){
            scanf("%d", &vet[i]);
        }
        z = Somavet(vet);
        printf("%d", z);
    return 0;
}