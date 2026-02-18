#include<stdio.h>
#include<string.h>

int main(){
    int i=0, tam;
    char frase[100];

    fgets(frase, 100, stdin);

    tam = strlen(frase);

    for(i=0; i < tam; i++){ // poderia usar também i < '\0'
        if(frase[0] >= 'a' && frase[0] <= 'z'){
            frase[0] = frase[0] - 32;
        }
         if(frase[i] >= 'A' && frase[i] <= 'Z'){
            frase[i] = frase[i] + 32;
        }
        /*else if(frase[i] == ' '){
            frase[i+1] = frase[i+1] - 32;
        }*/
    }
    printf("%s", frase);
    return 0;
}