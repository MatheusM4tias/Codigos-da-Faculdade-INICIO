#include<stdio.h>
int main(){
    int i=0, vet[10],vetB[10], cont=0;

        while(i<10){
            scanf("%d", vet[i]);
            i=i+1;
        }
        for(i=0; i<10; i++){
            if(vet[i]>0){
                vetB[cont]= vet[i];
                cont=cont+1;
            }
        }
    for(i=0; i<10; i++){
        printf("%d", vetB);
    }
    return 0;
}