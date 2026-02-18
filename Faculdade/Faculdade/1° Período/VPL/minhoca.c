#include<stdio.h>
#include<stdlib.h>

int main(){
    int tam;
    scanf("%d", &tam);
    
    char *matriz = (char*)malloc(tam * tam * sizeof(char));

    // leitura da matriz corretamente
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            scanf(" %c", &matriz[i * tam + j]); 
        }
    }

    int achei = 0, cont = 0;
    int i = 0, j = 0;

    while(!achei){
        if(matriz[i * tam + j] == 'o'){
            achei = 1;
            break;
        }

        cont++;

        // Direita
        if(j + 1 < tam && matriz[i * tam + j + 1] == 'x'){
            j++;
        }
        // Baixo
        else if(i + 1 < tam && matriz[(i + 1) * tam + j] == 'x'){
            i++;
        }
        // Esquerda
        else if(j - 1 >= 0 && matriz[i * tam + j - 1] == 'x'){
            j--;
        }
        // Cima
        else if(i - 1 >= 0 && matriz[(i - 1) * tam + j] == 'x'){
            i--;
        }
    }

    printf("%d\n", cont);
    free(matriz);
    return 0;
}

//GPT, muito diferente do meu código

/*#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    // Aloca a matriz dinamicamente como vetor 1D
    char *matriz = (char *)malloc(n * n * sizeof(char));

    // Lê a matriz (pulando quebras de linha)
    for (int i = 0; i < n * n; i++) {
        do {
            scanf("%c", &matriz[i]);
        } while (matriz[i] != 'x' && matriz[i] != 'o');
    }

    int passos = 0;
    int encontrou = 0;

    // Começa no canto superior esquerdo
    int i = 0, j = 0;

    while (!encontrou) {
        char atual = matriz[i * n + j];

        if (atual == 'o') {
            encontrou = 1;
        } else {
            passos++;
            // SEGUE O CAMINHO: direita ➡ baixo ⬇ esquerda ⬅ cima ⬆ (se não achar 'o')
            if (j + 1 < n && matriz[i * n + j + 1] != 'o') { // direita
                j++;
            } else if (i + 1 < n && matriz[(i + 1) * n + j] != 'o') { // baixo
                i++;
            } else if (j - 1 >= 0 && matriz[i * n + j - 1] != 'o') { // esquerda
                j--;
            } else if (i - 1 >= 0) { // cima (última tentativa)
                i--;
            } else {
                break; // segurança pra não entrar em loop infinito se o 'o' não existir
            }
        }
    }

    printf("%d\n", passos);

    free(matriz);
    return 0;
}*\






/*#include<stdio.h>
#include<stdlib.h>

int main(){

    int tam;

    scanf("%d", &tam);
    
    char *matriz = (char*)malloc (tam*tam*sizeof(char));

    //lematriz();
    for(int i=0; i < tam; i++){
        for(int j=0; j < tam; j++){
            scanf(" %c", &matriz[i*tam*j]);
        }
    }

        int achei=0, cont=0;
    while(achei == 0){
        int i,j;
        for(int j=0; j < tam; j++){ //pra direita
            if(matriz[0*tam*j] == 'x'){

            }
        }
        for(i=0; i < tam; i++){ //pra baixo
            if(matriz[i*tam*2] == 'x'){

            }
        }
        for(i=tam-1; i >= 0; i--){ //pra esquerda
            if(matriz[i*tam*j] == 'x'){

            }
        }
        for(i=tam -1; i >=0; i++){ //pra cima
            if(matriz[i*tam*2] == 'x'){

            }
        }
    }


    





    return 0;
}*/

