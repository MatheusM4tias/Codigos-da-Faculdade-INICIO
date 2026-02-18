#include<stdio.h>

int main(){
    
    int jogos=0, venceu=0;
    char resultado;
    
    while(jogos <= 5){
        scanf(" %c", &resultado);
            if(resultado == 'V') venceu++;
            jogos++;
    }
    
    
    if(venceu > 5) printf("1");
    else if(venceu == 3 || venceu == 4) printf("2");
    else if(venceu == 1 || venceu == 2) printf("3");
    else printf("-1");
    
    
    return 0;
}