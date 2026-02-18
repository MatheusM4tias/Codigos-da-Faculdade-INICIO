#include<stdio.h>
#include<string.h>

int main(){
    
    int cont=0;
    char string[100], substring[100];
    int freq[50];

    fgets(string, 401, stdin); // m
    fgets(substring, 401, stdin); //e

    int tam = strlen(string);

    for(int m=0; m < tam; m++){
        for(int e=0; e < tam; e++){
            if(string[m] == substring[e]){
                m++;
                freq[m] = cont++;
            } else {
                cont=0;
            }
        }
    }
    int maior =0;
    for(int i=0; i < 50; i++){
        
        if( freq[i] > maior){
            maior = freq[i];
        }
    }
    printf("%d", maior);

    return 0;
}