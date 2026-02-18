#include<stdio.h>  
//algoritmo para potencia de x para y
int main(){
int i=1,y;
int x;


printf("digite os numeros: ");
scanf("%d" "%d", &x, &y);

int p=x;

    while(i < y)
        {   p=p*x;
            i=i+1; /*esse loop multiplica a base até chegar no numero do expoente*/
        }
    
 printf("o resultado e= %d", p);

return 0;

}