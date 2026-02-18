#include<stdio.h>
int main(){

double A, R;
double pi=3.14159;
    
    printf("qual o raio");

    scanf("%lf", &R);
    
    A= pi*(R*R);
    
    printf("A= %.4lf", A);
    
return 0;
}