#include<stdio.h> //chico com 1,5 de altura e ze com 1.1, crescendo 0.2 e 03 /ano, quanto tempo ze > chico
int main(){
double chico=1.5; 
double ze=1.1;
int ano=0;

    while(ze<chico){
        chico=chico+0.2;
        ze=ze+0.3;
        ano++;
    }
printf("%lf\n", ano);
return 0;
}