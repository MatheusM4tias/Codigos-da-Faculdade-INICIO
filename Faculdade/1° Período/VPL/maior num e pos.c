#include<stdio.h>
int main(){
    int x, pos;
    int maior=0, i=0;
    
    for(i=1;i<5;i++){ // loop para ler os números
        scanf("%d\n" , &x);
        if( i==1){
            maior=x;
            pos=i;
        }else if(x>maior){ 
            maior=x;
            pos = i;
        }
    }
    printf("%d %d ", maior, pos);
    return 0;
}