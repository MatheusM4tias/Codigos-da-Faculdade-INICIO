#include<stdio.h>
int main() {
    int resultado;
    float n1=4.0,n2=4.2,no=6.0,f=0.8;
    resultado = ((n1 + n2)/2 >= 5.0) && (f>=0.75) || ((n1 + no)/2 >= 5.0) && (f >=0.75) || ((no + n2)/2 >= 5.0) && (f >= 0.75);
        if(resultado == 1){
            printf("ALUNO APROVADO");
        } else {
            printf("ALUNO REPROVADO");
        }
            
        
return 0;   
      
}