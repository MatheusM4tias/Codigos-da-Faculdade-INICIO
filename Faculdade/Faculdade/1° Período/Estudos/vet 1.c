#include<stdio.h>
int main(){
    int vet1[3],vet2[3], vetR[3];
    int i=0;

    while(i<3){
        scanf("%d", &vet1[i]); // ler os vetores atribuindo um valor pra cada 
        scanf("%d", &vet2[i]);
        vetR[i] = vet1[i] * vet2[i];
        i++;
    }
    for(i=0; i<3; i++){
        printf("%d ", vetR[i]);
    }
    return 0;
}