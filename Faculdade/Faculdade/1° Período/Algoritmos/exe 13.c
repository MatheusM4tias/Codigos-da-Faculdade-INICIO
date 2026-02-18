#include<stdio.h>
int main(){

    int num=101,primo=1,cont_p=0,x[10],i;
    
    printf("os numeros primos sao\n");
    while(cont_p < 10){
        for(i=2;i<num;i++){
                if(num%i==0){
                    primo=0;
                    i=num;
                } 
        }
        if(primo==1){
                cont_p = cont_p +1;
                //printf("%d",num);
                x[cont_p] = num;
        }
        num++;
        primo = 1;
    }      
    for(int i=1; i<10;i++){
        printf("%d", x[i]);
    }

return 0;
}