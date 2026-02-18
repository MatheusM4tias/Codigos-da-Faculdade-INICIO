#include<stdio.h>
int main(){
    
    double m=0, N, N2, N3;
    int j=0, Q;
    scanf("%d", &Q);
    
    while(j<Q){
        scanf("%lf %lf %lf", &N, &N2, &N3);
        m= (N*2 + N2*3 + N3*5)/10;
        printf("%0.1lf\n", m);
        j++;
    }
    return 0;
}