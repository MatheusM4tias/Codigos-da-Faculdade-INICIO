#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void gera_vet(vet_aleatory);
void busca_binária();

int main(){

    int vet_aleatory[16] = 0;
    gera_vet(vet_aleatory);



}
void gera_vet(){

    int i=0;
    for(i=0; i < 15; i++){
        srand(time(NULL));
        vet_aleatory[i] = (rand() % 100 )+1;
        printf("%d", vet_aleatory[i]);
    }
    return 0;
}