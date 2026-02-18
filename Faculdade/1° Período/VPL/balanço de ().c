#include<stdio.h>
#include<string.h>
/*Ou seja, todo parênteses que fecha deve ter um outro parênteses que abre correspondente 
e não pode haver parênteses que fecha sem um previo parenteses que abre e a quantidade total 
de parenteses que abre e fecha deve ser igual.*/
int main(){

    int qtdA = 0, qtdB = 0;
    char expre[1000];

    scanf("%s", expre); //le a expressao

    int tam = strlen(expre); //tamanho da expressao

    // 
    for(int i=0; i < tam; i++){
        if(expre[0] == ')'){
            printf("incorrect");
            exit(0);
       }
        if(expre[i] == ')') qtdB++;
        else if (expre[i] == '(') qtdA++;
    }  



    if(qtdA == qtdB) printf("correct");
    else printf("incorrect");

    return 0;
}