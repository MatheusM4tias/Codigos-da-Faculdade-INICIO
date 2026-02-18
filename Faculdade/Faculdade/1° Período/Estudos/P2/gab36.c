#include<stdio.h>
int main(){
    char letra;
    int cont = 0, palavra = 1, linha = 1;
    FILE *entrada; 
    FILE *saida;
    char arq[200];
    scanf("%s", arq);
    entrada = fopen(arq,"rt"); 
    while(!feof(entrada)){
        fscanf(entrada,"%c",&letra);
            cont++;
        if(letra == ' '|| letra == '\n')
            palavra++;
        if(letra == '\n')
            linha++;
    }
    printf("%d caracteres %d palavras %d linhas\n",cont,palavra,linha); 
    
    fclose(entrada);
    
    entrada = fopen(arq,"rt");
    saida = fopen("saida.txt","wt");
    while(!feof(entrada)){
        fscanf(entrada,"%c",&letra);
        if(letra != 'a' && letra!= 'A' && letra!='e' && letra!='E' && letra!='i' && letra!='I' && letra!='o' && letra!='O' && letra!='u' && letra!='U'){
            fprintf(saida,"%c",letra);
        }
    }
    
    fclose(entrada);
    fclose(saida);
    saida = fopen("saida.txt","rt");
    while(!feof(saida)){
        fscanf(saida,"%c",&letra);
        printf("%c",letra);
    }
    fclose(saida);
    return 0;
    
}
