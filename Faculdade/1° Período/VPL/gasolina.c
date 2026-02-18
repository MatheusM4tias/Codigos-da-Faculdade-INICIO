#include<stdio.h>
int main(){
    double t, vm;
    double QuanL;
    
    scanf("%lf %lf", &t, &vm);
    QuanL= (t*vm)/12;
    
    printf("%.3lf", QuanL);
    
    return 0;
}