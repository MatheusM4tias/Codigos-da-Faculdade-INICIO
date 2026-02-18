#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int valores[] =    {900, 500, 400, 100, 90,  50,  40,  10, 9,   5,   4,   1};
    const char* rom[] = {"CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

    for (int i = 0; i < 12; i++) {
        while (n >= valores[i]) {
            printf("%s", rom[i]);
            n -= valores[i];
        }
    }

    printf("\n");
    return 0;
}