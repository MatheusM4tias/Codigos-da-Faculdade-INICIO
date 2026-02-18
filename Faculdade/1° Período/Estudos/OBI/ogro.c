#include<stdio.h>

int main(){
    int n1, n2, R;

    scanf("%d %d", &n1, &n2);
    
    
    if(n1>n2){
        R = n1+n2;
    } else {
        R = 2*(n2-n1);
    } 

    printf("%d", R);

    return 0;

}