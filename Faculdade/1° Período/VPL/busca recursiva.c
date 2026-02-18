#include<stdio.h>

int FBI(int *vet, int tamvet, int procurado, int inicio){
    
    if (inicio >= tamvet) return -1;
    if(vet[inicio] == procurado) return inicio; 
    return FBI(vet, tamvet, procurado, inicio + 1); //olha o próximo indice, até encontrar

}

int main(){
    
    int procurado, tamvet, vet[100];
    
    scanf("%d", &procurado);
    scanf("%d", &tamvet);
    
    for(int m=0; m < tamvet; m++){
        scanf("%d", &vet[m]);
    }
    
    int resultado = FBI(vet, tamvet, procurado, 0);
    
    printf("%d\n", resultado);
    
    return 0;
}