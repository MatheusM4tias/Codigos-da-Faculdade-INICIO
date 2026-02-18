// fazer um programa que le uma struct personagens e guarda dentro de um arquivo
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
FILE*dados;

struct Pessoa {
    char nome[50];
    int idade;
    char sexo;
} ;

void GerarArq(){
    
    int i=0, m;
    char nome [50];
    struct Pessoa ze;

    printf("qual o nome do arquivo ? ");
    scanf("%s", nome);
    printf("quantas pessoas serao ? ");
    scanf("%d", &m);
    
    dados = fopen(nome, "w");

    for(i=0; i < m; i++){
        printf("Digite os dados do primeiro integrante: ");
        scanf("%s %d %c", ze.nome, &ze.idade, &ze.sexo);
        fprintf(dados, "%s %d %c", ze.nome, ze.idade, ze.sexo );
    }
    fclose(dados);

    printf("arquivo %s criado ",nome );
       

}

int main(){

    
    GerarArq();


    return 0;
}