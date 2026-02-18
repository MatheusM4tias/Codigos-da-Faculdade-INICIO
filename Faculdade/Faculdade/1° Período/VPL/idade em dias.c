#include<stdio.h>
int main (){
    
    int x;
    int A,M,D;
    
    scanf("%d", &x);
    
    A = x/365;

    M = (x%365)/30;
    
    D = (x%365)-30;
        if(D>30){
            D=D-30;
        }
    
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", A, M, D);
    
return 0;
}