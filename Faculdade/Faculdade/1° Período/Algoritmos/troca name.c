#include<stdio.h>
int main(){
char t[20];
char nome1[20],nome2[20];


printf("quais nomes serão trocados?");
scanf("%s %s", &nome1, &nome2);

t[20]=nome1;
nome1[20]=nome2;
nome2[20]=t;

printf("os nomes invertidos sao %s %s", nome1, nome2);
return 0;
}