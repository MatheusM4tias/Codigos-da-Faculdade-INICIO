#include <stdio.h>

void hanoi(int n, char origem, char auxiliar, char destino) {
    if (n == 1) {
        printf("%c %c\n", origem, destino);
        return;
    }
    hanoi(n - 1, origem, destino, auxiliar);// Passo 1: move n-1 discos da origem para auxiliar
    printf("%c %c\n", origem, destino);// Passo 2: move o maior disco (n) da origem para destino
    hanoi(n - 1, auxiliar, origem, destino);// Passo 3: move os n-1 discos da auxiliar para destino
}

int main() {
    int n;
    scanf("%d", &n);  

    hanoi(n, '1', '2', '3');  // origem = 1, auxiliar = 2, destino = 3

    return 0;
}
