#include<stdio.h>

int main(){
    char nome[201], i;
    scanf("%s", nome);

    for(i=0; nome[i] != '\0'; i++){
        if(nome[i] >= 'A' && nome[i] <='Z'){
            nome[i] = nome[i] + ('a' - 'A');
        }
    }
    printf("%s", nome);
    
    return 0;
    
}