#include<stdio.h>
int main(){
    int vetA[7];
    int i=0, pos=0, menor;

    for(i=0; i<6; i++){
        scanf("%d", &vetA[i]);
        menor=vetA[0];
            for(i=0; i<6; i++){
                if(vetA[i] < menor){
                    menor=vetA[i];
                    pos=i;
                }
                for(i=0; i<6; i++){
                    vetA[i]= vetA[i]/menor;
                }
            }
    }
    for(i=0; i<6; i++){
        printf("%d", vetA[i]);
    }
}