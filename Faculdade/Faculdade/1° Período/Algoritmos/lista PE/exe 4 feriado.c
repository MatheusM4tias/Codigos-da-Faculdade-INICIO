#include<stdio.h> //funcionando
#include<time.h>
#include<stdlib.h>
int main(){
    srand(time(NULL));
    int x, r, cont=0;
    r= (rand()%1000)+1;

    printf("Advinhe o numero que to pensando \n");
    while(x!=r){
        scanf("%d", &x);
        if(x==r){
            break;
        }
            if(x < r){
                printf("um pouco mais... \n");
            } else{
                printf("um pouco menos...\n ");
            }
            cont++;
    }
    printf("voce precisou de %d tentantivas, mas parabens", cont);
return 0;
}