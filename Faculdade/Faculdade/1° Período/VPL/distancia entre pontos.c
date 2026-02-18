#include<stdio.h>
int main(){
    double x1,x2,D;
    double y1,y2;

    scanf("%lf %lf %lf %lf", &x1,&y1,&x2,&y2);
    D= ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));

    printf("%.4lf", D);

    return 0;
}