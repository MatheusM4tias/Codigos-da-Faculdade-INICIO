#include <stdio.h>

void lerArquivo(char matriz[3][3], const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            fscanf(arquivo, " %c", &matriz[i][j]);

    fclose(arquivo);
}

void salvarArquivo(char matriz[3][3], const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao salvar o arquivo.\n");
        return;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            fprintf(arquivo, "%c ", matriz[i][j]);
        fprintf(arquivo, "\n");
    }

    fclose(arquivo);
}

void exibirMatriz(char matriz[3][3]) {
    printf("\nEstado atual do jogo:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%c ", matriz[i][j]);
        printf("\n");
    }
}

char verifVencedor(char matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (matriz[i][0] != '-' && matriz[i][0] == matriz[i][1] && matriz[i][1] == matriz[i][2])
            return matriz[i][0];
        if (matriz[0][i] != '-' && matriz[0][i] == matriz[1][i] && matriz[1][i] == matriz[2][i])
            return matriz[0][i];
    }

    if (matriz[0][0] != '-' && matriz[0][0] == matriz[1][1] && matriz[1][1] == matriz[2][2])
        return matriz[0][0];

    if (matriz[0][2] != '-' && matriz[0][2] == matriz[1][1] && matriz[1][1] == matriz[2][0])
        return matriz[0][2];

    return '-';
}

int temEspacosVazios(char matriz[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (matriz[i][j] == '-') return 1;
    return 0;
}

void fazerJogada(char matriz[3][3], char jogador) {
    int linha, coluna;
    while (1) {
        printf("Jogador %c, digite linha e coluna (0 a 2): ", jogador);
        scanf("%d %d", &linha, &coluna);

        if (linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && matriz[linha][coluna] == '-') {
            matriz[linha][coluna] = jogador;
            break;
        } else {
            printf("Posição inválida! Tente novamente.\n");
        }
    }
}
int main() {
    char jogo[3][3];
    char jogador = 'X';
    lerArquivo(jogo, "jogo.txt");

    while (1) {
        exibirMatriz(jogo);

        char vencedor = verifVencedor(jogo);
        if (vencedor != '-') {
            printf("O jogador '%c' venceu!\n", vencedor);
            break;
        }

        if (!temEspacosVazios(jogo)) {
            printf("Empate! O jogo terminou sem vencedor.\n");
            break;
        }

        fazerJogada(jogo, jogador);
        salvarArquivo(jogo, "jogo.txt"); // salva o progresso
        jogador = (jogador == 'X') ? 'O' : 'X'; // troca jogador
    }

    return 0;
}
