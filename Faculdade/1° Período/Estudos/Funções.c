#include<stdio.h>
int Soma(){
    int x,y,a;
        scanf("%d %d", &x, &y);
        a = x+y;
    return a;
}

int main(){
    int z;

        z = Soma();
        printf("%d", z);
    return 0;
}