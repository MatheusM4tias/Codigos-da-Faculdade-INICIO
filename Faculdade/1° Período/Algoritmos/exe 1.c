#include<stdio.h> //le 5 valores para a, um de cada vez, e diz quantos deles foram negativos.
int main(){
int a,i;
int cont=0;

for(i=0;i<5;i++){
    printf("digite uma valore\n");
    scanf("%d", &a);

    if(a<0){
        cont=cont+1;
    }
}
printf("Dos valores inseridos %d sao negativos ",cont);
return 0;
}