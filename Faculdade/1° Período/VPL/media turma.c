#include<stdio.h>
int main(){
    
    double A, N, i=0, s=0;
    
    
    scanf("%lf", &A); // saber quantos alunos tem na turma
    for(i=0; i<A; i++){
        scanf("%lf", &N);// loop pra ler todas as notas, somar elas e guardar na variável. incrementação
            if(N<=10){
             s=s+N;
            }
    }
    double m=s/A;
    printf("%0.1lf", m );
    return 0;
}