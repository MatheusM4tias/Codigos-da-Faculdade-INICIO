#include<stdio.h>
void Recebevet(int*vet){
    int i;
    for(i=0; i < 10; i++){
        scanf("%d", &vet[i]);
    }
}

int Maiorvet(int*vet, int*pos){
    int i, maior = -1;
    for(i=0; i < 10; i++){
        if(vet[i] > maior){
            maior = vet[i];
            (*pos) = i+1;
        }
    }
    return maior;
}

int main(){
    int m;
    int vet[10];
    int pos;

    Recebevet(vet);
    m = Maiorvet(vet, &pos);
    printf("o maior valor digitado e %d e a psoicao e %d" , m, pos );
}