#include<stdio.h>
int main(){
    int total;
    int n1, n2, n3, n4, n5, n6,n7;

    scanf("%d", &total);

    n1= total / 100;
    n2= (total % 100) / 50;
    n3= ((total % 100) % 50) / 20;
    n4= (((total % 100) % 50) % 20) / 10;
    n5= ((((total % 100) % 50) % 20) % 10) / 5;
    n6= (((((total % 100) % 50) % 20) % 10) % 5) /2;
    n7= ((((((total % 100) % 50) % 20) % 10) % 5) %2) /1;

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00", total, n1, n2, n3, n4, n5, n6,n7);
return 0;
} 