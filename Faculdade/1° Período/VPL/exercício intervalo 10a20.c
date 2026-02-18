#include<stdio.h>

int main(){
    int x, i=1, countIn=0, countOut=0; 
    while(i<=10){   
        printf("Digite aqui o número %d: ", i );
        scanf("%d",&x);
        if((x>=10) && (x<=20)){   
            countIn=countIn+1;
        }else countOut=countOut+1;
    i=i+1;
    }
    printf("Dentro: %d\nFora: %d\n", countIn, countOut);
    return 0;
}