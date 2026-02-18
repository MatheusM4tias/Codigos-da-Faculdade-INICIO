#include<stdio.h>
int main(){

    int x,y;
    int soma=0, mai=0, men=0;

    scanf("%d %d", &x, &y);
    if(x>y){
        mai = x;
        men = y;
    }else{
        mai = y;
        men = x;
    }
    men++;
    
    while(men < mai){
        if(men%2!=0){
            soma = soma + men;
            men++;
        }else{
            men++;
        }
    }
    printf("%d", soma);
    return 0;
}