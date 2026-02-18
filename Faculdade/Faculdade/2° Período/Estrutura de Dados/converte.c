#include<stdio.h>

float converte(float c);
int main(){
    
    int a;
    scanf("%d", &a);
    a = converte(a);

    printf("%d em graus ", a);

    return 0;
}
float converte(float c){

    float f;
    f = 1.8*c + 32;
    return f;

}