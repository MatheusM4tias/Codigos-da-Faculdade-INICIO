#include<stdio.h>
#include<math.h>
int main(){
    int x, i=2, pot;
    
    scanf("%d", &x);
    while(i<=x){
        if(i%2 == 0){
            pot= pow(i,2); // i*i também funciona, use a função pra se acostumar.
            printf("%d^2= %d\n", i, pot );
            i++;
        } else {
            i++;
        }
    }
    return 0;
}