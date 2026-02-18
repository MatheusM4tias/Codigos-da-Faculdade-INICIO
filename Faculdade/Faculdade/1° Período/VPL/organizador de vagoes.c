#include<stdio.h>

int main(){

    int N, L, cont, temp;
    int vagoes[100]; 

    scanf("%d", &N); // quantidade de casos
    
    for(int m = 0; m < N; m++){
        scanf("%d", &L); // tamanho do vagão
        cont = 0;

        for(int i = 0; i < L; i++){
            scanf("%d", &vagoes[i]);
        } 
        
        // ordenação e contagem 
        for(int n = 0; n < L - 1; n++){
            for(int j = 0; j < L - 1 - n; j++){
                if(vagoes[j] > vagoes[j+1]){
                    temp = vagoes[j];
                    vagoes[j] = vagoes[j+1];
                    vagoes[j+1] = temp;
                    cont++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", cont);
    }
    
    return 0;
}



/*#include<stdio.h>

int main(){

    int N, L, cont=0, temp;
    int vagoes[20];

    scanf("%d", & N); //quantidade de casos
    
    // loop pra quantidade de casos
    for(int m=0; m < N; m++){
        scanf("%d", &L); //tamanho do vagão
        cont = 0;
        // preencher o vetor 
        for(int i=0; i < L; i++){
            scanf("%d", &vagoes[i]);
        } 
            // ordenar o vetor
        for(int n=0; n < L; n++){
            for(int j=0; j < L ; j++){
                if(vagoes[j] > vagoes[j+1]){
                    temp = vagoes[j];
                    vagoes[j] = vagoes[j+1];
                    vagoes[j+1] = temp;
                    cont++;
                }
            }
        }
        
    printf("Optimal train swapping takes %d swaps", cont);
    }
    
    return 0;
}*/