#include<stdio.h>

int somavoltando(int *vet, int tamvet){

    if(tamvet==0) return 0;
    else return vet[tamvet-1] + somavoltando(vet, tamvet - 1);
    
}

int main(){

    int casos, n, i=0;
    int tamvet, vet[100];

    scanf("%d", &casos);

    for(i=0; i < casos; i++){
        scanf("%d", &tamvet);
        for(int j=0; j < tamvet; j++){
            scanf("%d", &vet[j]);
        }
        int resultado = somavoltando(vet, tamvet);
        printf("%d", resultado);
    }

    return 0;
}
