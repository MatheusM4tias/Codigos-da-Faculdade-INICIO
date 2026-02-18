#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    char nome[50];
    float p1;
    float p2;
} ALUNO;

int main() {
    FILE *arq = fopen("arquivo.txt", "r");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int qtd;
    fscanf(arq, "%d\n", &qtd); // lê a quantidade de alunos

    ALUNO jovem;
    for (int i = 0; i < qtd; i++) {
        fgets(jovem.nome, 50, arq); // lê o nome (linha inteira)
        fscanf(arq, "%f %f\n", &jovem.p1, &jovem.p2); // lê as duas notas

        float media = (jovem.p1 + jovem.p2) / 2.0;
        if (media > 7.0) {
            printf("%s", jovem.nome);
        }
    }

    fclose(arq);
    return 0;
}
