#include<stdio.h>
#include<stdlib.h>
#include<string.h>
FILE*arq;

int GeradorArq(){
    
    int i=0, m;
    char nome[50];
    printf("Quantos numeros deseja no arquivo ? E qual nome dara a ele: ");
    scanf("%d %s", &m, nome);

    arq = fopen(nome, "w");

        while( i < m){
            fprintf(arq,"%d ", rand()%1000);
            i++;
        }
    fclose(arq);
    return m;
}

void OrdenarArq(int tam, int *vet){

        int i=0, j=0, menor=0, aux;

        while( i < tam){
            
        }




}


int main(){

    

    int tam = GeradorArq();
    OrdenarArq(tam);

    return 0;
}