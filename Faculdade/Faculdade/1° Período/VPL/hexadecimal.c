#include<stdio.h>

void Conversao(int n, int b);

int main(){

    int n,b;
    b = 16;
    scanf("%d", &n);

    Conversao(n,b);
    
    return 0;
}
void Conversao(int n, int b){

    int resto;
    resto = n % b;

    if(n >= b) Conversao(n/b, b);
    if( resto <= 9){
        printf("%d", resto);
    } else {
        printf("%c", resto - 10 + 'A');
    }
}