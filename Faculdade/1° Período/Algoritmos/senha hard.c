#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int VerificarTam(char*senha,int tam){
    if(tam >= 8){
        return 1;
    } else {
        return 0;
    }
}

int VerificarMaiusculo(char*senha, int tam){
    int i=0, cont=0;
    for(i=0; i < tam; i++){
        if(senha[i] >= 'A' && senha[i] <= 'Z'){
            cont++;
        }
    }
    if(cont >= 2){
        return 1;
    } else {
        return 0;
    }
}

int VerificarNome(char*senha, int tam){
    int i=0;
    char vetaux[50];

    fgets(senha, 401, stdin);

    while(senha[i] != ' '){
        for(i=0; i < tam; i++){
            senha[i] == vetaux[i];

        }
      i++;
    }
}

int SenhaAlterada(char*senha){
    int pos, tam;

    tam = strlen(senha);

    pos= 32 + rand()% 14;
    
    for(int i=tam+1; i > (tam/2); i--){
        senha[i - 1] = senha[i];
        senha[tam/2]= pos;
    }

    return 1;
}

int main(){
    int f1,f2,f3;
    char senha[50], nome[50];

    printf("digite seu nome: "); //saber o nome do usuário
    fgets(nome, 401, stdin);

    printf("Digite sua senha: "); //saber a senha do usuário
    fgets(senha, 401, stdin);
    
    int tam = strlen(senha);

    f1=VerificarTam(senha,tam);
    f2=VerificarMaiusculo(senha,tam);
    f3=VerificarNome(senha,tam);
    

    if (f1 && f2 && f3) {
        printf("Senha válida!\n");
        SenhaAlterada(senha); // acertar na função de alterar a senha
        printf("Nova senha com caractere especial: %s\n", senha);
    } else {
        printf("Senha inválida. Verifique os critérios.\n");
    }

    return 0;
}