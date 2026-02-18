#include<stdio.h>

int Soma(int a, int b){
    int adicao;

    adicao= a + b;;

    return adicao;
}
int main(){
    int a, b, resultado;

    printf("quer somar quais números ?");

    scanf("%d %d", &a, &b);

    resultado = Soma(a,b);

    printf("%d", resultado);

    return 0;
}