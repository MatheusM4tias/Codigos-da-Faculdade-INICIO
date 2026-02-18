#include<stdio.h> //funcionou com 10 valores 
#include<math.h>
int main(){
    int vet[80],i;
    int x, y;
    int maior=0, menor=0, potencia;

        for(i=0; i<80; i++){
            scanf("%d", &vet[i]); //looping pra ler e armazenar os valores.
        }
        scanf("%d %d", &x,&y); // outros 2 inteiros.
        vet[x]= vet[x]; //atribuição p/ os int serem correspondentes aos indice do vetor.
        vet[y]= vet[y]; 
            if(vet[x] > vet[y]){
                maior= vet[x]; //descobir qual indice é maior e qual é menor
                menor= vet[y];
            }else {
                maior= vet[y];
                menor= vet[x];
            }
            if(vet[x] > 80 || vet[y] > 80 || menor < 0 || maior < 0){
                printf("combinacao invalida \n");
            } else {
              potencia= pow(menor, maior);
              printf("%d elevado a %d = %d\n", menor, maior, potencia);
            } 
    return 0;
}