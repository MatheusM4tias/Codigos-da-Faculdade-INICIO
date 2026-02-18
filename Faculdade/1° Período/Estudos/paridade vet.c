#include<stdio.h>
int main(){
    int par=0,impar=0;
    int vet[20];
    int i;
        for(i=0; i<20; i++){
            scanf("%d", &vet[i]);
        }
        for(i=0; i<20; i++){
            if(vet[i]%2==0){
                par++;
            } else {
                impar++;
            }
        }
            printf("%d %d", impar, par);
        
return 0;
}