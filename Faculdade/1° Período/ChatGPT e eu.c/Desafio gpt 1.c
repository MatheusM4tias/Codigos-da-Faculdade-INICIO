#include<stdio.h>

    int main(){
    int MAIOR;
    int MENOR;
    int MEIO;
    int x,y,z;

printf("Digite os 3 numeros");
scanf("%d" "%d" "%d", &x, &y, &z);
 if(x==y||y==z||x==z){
 printf("ha numeros iguais.\n");
 } else {
    if(x>y){
    MAIOR = x
    } else {
    MEIO = x}
    if(x>z){
    MAIOR = x}
    else{
    MENOR = x}
    if(y>z){
    MEIO=y,MENOR=z}
    else{
    MEIO=z,MENOR=y}
    }
printf("%d %d %d",MAIOR, MEIO, MENOR);
return 0;
}