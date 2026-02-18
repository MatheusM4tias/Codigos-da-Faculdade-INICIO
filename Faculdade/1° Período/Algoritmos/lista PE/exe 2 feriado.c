#include<stdio.h> //funcionou
int main(){
    int vet[10], i=0, x, cont=0;

    for(i=0; i<10; i++){
        scanf("%d", &vet[i]); // ler e guarda os valores dentro do vetor
    }
        scanf("%d", &x); // inteiro a ser procurad dentro do vetor
        for(i=0; i<10; i++){
            if(vet[i]== x){ // verificar quantas vezes o x aparece dentro do vetor
                cont=cont+1;
            }

         }
    printf("o valor foi encontrado %d vezes", cont);
    return 0;
}