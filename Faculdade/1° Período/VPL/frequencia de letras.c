#include<stdio.h>
#include<string.h>

int main(){

    int casos;
    char alfabeto[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','y','z'};
    char frase[201];
    scanf("%d", &casos);

    for(int i=0; i < casos; i++){
        fgets(frase, 401, stdin);
        int tam= strlen(frase);
            for(int m=0; m < tam; m++){
                if(frase[m] == alfabeto[m])
        }
    }





    return 0;
}