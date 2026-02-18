#include <stdio.h>

int main() {
    int v[1000], n = 0;

    while (scanf("%d", &v[n]) != EOF) {
        n++;
    }

    int maxAtual = v[0];
    int maxGlobal = v[0];
    int start = 0, end = 0, startTemp = 0;

    for (int i = 1; i < n; i++) {
        if (maxAtual + v[i] < v[i]) {
            maxAtual = v[i];
            startTemp = i;
        } else {
            maxAtual += v[i];
        }

        if (maxAtual > maxGlobal) {
            maxGlobal = maxAtual;
            start = startTemp;
            end = i;
        }
    }

    for (int i = start; i <= end; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
