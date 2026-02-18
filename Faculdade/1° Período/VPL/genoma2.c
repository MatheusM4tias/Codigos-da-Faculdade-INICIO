#include<stdio.h>
#include<string.h>

void valida(int tam1, int tam2);
void comparacao(char *sequencia, char *subsequencia, int tam2, int tam1);

void valida(int tam1, int tam2){
    if(tam2 > tam1){
        printf("0");
        exit(0);
    }
}

void comparacao(char *sequencia, char *subsequencia, int tam2, int tam1){
    
    int verif = 0, i, qtd=0;

    for(int i=0; i < tam1; i++){
        for(int m=0; m < tam2; m++){
            if(subsequencia[i] == sequencia[m]){
                i++;
                verif++;
            }
        }
        if(verif == tam2) qtd++;
        verif =0;
    }
    printf("%d", qtd);
}


int main(){

    char sequencia[100], subsquencia[100];
    int tam1, tam2;

    scanf("%s", sequencia);
    scanf("%s", subsquencia);

    tam1 = strlen(sequencia);
    tam2 = srtlen(subsquencia);
    
    valida(tam1, tam2);
    comparacao(sequencia, subsquencia, tam2, tam1);
}
