#include<stdio.h>
int main(){
    int q, n, i, aprovados=0;

    scanf("%d", &q); // ler a quantidade de alunos
    for(i=0;i<q; i++){
        scanf("%d", &n); //ler todas as notas
        if(n>=5 && n<=10){
            aprovados++;
        }
    }
    printf("%d", aprovados );
    return 0;
}