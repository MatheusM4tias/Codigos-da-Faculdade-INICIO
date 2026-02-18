#include<stdio.h>
#include<string.h>

Verificacao(char*frase, char*palavra, int tam){


    int i=0, j=0,cont=0;
    while(frase[i] != '\0'){

        for(j=0; j < tam; j++){
            if(frase[i] == palavra[j]){
                i++;
                cont++;
            } else {
                cont=0;
                j=tam;
            }  if((cont == tam) && (palavra[tam+1] == ' ')){
                    printf("palavra encontrada 1");
            }
        } 
        i++;
    } 
        if(cont != tam){
            printf("palavra nao encontrada");
        } else {
            printf("palavra encontrada");
        }
    }

int main(){
    int tam;
    char frase[100], palavra[20];

    printf("Digite uma frase aqui anjo: ");
    fgets(frase, 100, stdin);
    printf("Qual palavra deseja verificar: ");
    scanf("%s", palavra);

    tam = strlen(palavra);
    //printf(" %s ttttt %s tttt %d", frase, palavra, tam);

    Verificacao(frase, palavra, tam);

    return 0;
}
