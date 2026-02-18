#include <stdio.h>
#include<stdlib.h>

int main(){

    int numero;
    int xmenor =0;

    scanf("%d" , &numero); // quantidade de notas

    int *VetNotas = (int *) malloc( numero * sizeof (int)); // alocação dinamica dessas notas

    for( int i=0; i < numero; i++){
        scanf("%d", &VetNotas[i]); // ler as notas e guardar no vetor 
    }
    // ordenação simples (bubble sort)
    for (int i = 0; i < numero - 1; i++) {
        for (int j = 0; j < numero - i - 1; j++) {
            if (VetNotas[j] > VetNotas[j + 1]) {
                int temp = VetNotas[j];
                VetNotas[j] = VetNotas[j + 1];
                VetNotas[j + 1] = temp;
            }
        }
    }
    // 
    int cont = 0, m=0;
        while(cont < 5){
            if(VetNotas[m] < VetNotas[m+1] ){
                xmenor = VetNotas[m];
                cont++;
            } 
            m++;
        }
    printf("%d", xmenor);
    return 0;
}