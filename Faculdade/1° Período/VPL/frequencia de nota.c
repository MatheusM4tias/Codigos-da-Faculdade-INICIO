#include<stdio.h>

int main(){

    int quantidade, i=0, j=0;
    int nota;

    int Notas[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int freq_Notas[11] = {0};

    scanf("%d", &quantidade);

    for(i=0;  i < quantidade; i++){
        scanf("%d", &nota);
        for(j=0; j < 11; j++){
            if(Notas[j] == nota){
                freq_Notas[j]++;
                break;
            }
        }
    }
    for(i=0;  i < 11; i++){
        printf("%d ", freq_Notas[i]);
    }


    return 0;
}