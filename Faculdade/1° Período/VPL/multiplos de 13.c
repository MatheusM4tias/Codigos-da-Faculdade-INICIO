#include<stdio.h>
int main(){
    int x,y;
    int menor, maior;
    int soma=0;

    scanf("%d %d", &x,&y);
    
    if(x<y){
        menor = x;
        maior = y;
    } else{
        menor=y;
        maior=x;
    }
    while(menor<=maior){
        if(menor%13!=0){
            soma = soma+ menor;
            menor = menor+1;
        }else {
            menor = menor +1;
        }
    }
    printf("%d", soma);
    
    return 0;
}
