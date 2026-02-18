#include<stdio.h>
int main(){
    int q, n, n2=10, menor=10, i=0;

    scanf("%d", &q); // ler a quantidade de alunos
    for(i=0;i<q; i++){
        scanf("%d", &n); //ler todas as notas
        if(n<10 && n>=0 && n<menor){
            menor=n; //descobre qual é a menor
            if(n2>menor){
                n2=n;
            }
        }
    }
    
    printf("%d", n2);
    return 0;
}