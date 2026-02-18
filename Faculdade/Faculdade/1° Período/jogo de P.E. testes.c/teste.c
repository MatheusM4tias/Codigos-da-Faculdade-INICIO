#include <stdio.h>
#include <stdlib.h>

// Variáveis globais
int fe = 0;
int tempo = 100;
int escolha;

// Protótipos
void menu();
void capitulo1();
void capitulo2();
void capitulo3();
void final();

// Função principal
int main() {
    menu();
    return 0;
}

// Função de menu inicial
void menu() {
    int opcao;

    printf("=====================================\n");
    printf("        DESPERTAR DA CONSCIÊNCIA     \n");
    printf("    Um jogo de decisões morais       \n");
    printf("=====================================\n");
    printf("1 - Iniciar Jogo\n");
    printf("2 - Sair\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            capitulo1();
            break;
        case 2:
            printf("Saindo...\n");
            exit(0);
        default:
            printf("Opção inválida. Encerrando.\n");
            exit(1);
    }
}

// Capítulo 1
void capitulo1() {
    system("clear || cls");
    printf("\nCapítulo 1: O Despertar\n");
    printf("Você acorda atrasado para a aula.\n");
    printf("O que deseja fazer?\n");
    printf("1 - Orar rapidamente antes de sair\n");
    printf("2 - Sair correndo sem orar\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Você ora pedindo direção para o dia.\n");
            fe += 10;
            tempo -= 20;
            break;
        case 2:
            printf("Você sai às pressas, mas sente um vazio.\n");
            fe -= 5;
            tempo -= 5;
            break;
        default:
            printf("Escolha inválida. Continuando como se tivesse saído sem orar.\n");
            fe -= 5;
            tempo -= 5;
    }

    capitulo2();
}

// Capítulo 2
void capitulo2() {
    system("clear || cls");
    printf("\nCapítulo 2: No caminho\n");
    printf("No ponto de ônibus, uma senhora deixa cair as compras.\n");
    printf("1 - Ajudar mesmo correndo risco de atraso\n");
    printf("2 - Fingir que não viu para não se atrasar\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Você ajuda a senhora. Ela te agradece com um sorriso sincero.\n");
            fe += 15;
            tempo -= 15;
            break;
        case 2:
            printf("Você ignora e segue seu caminho. O peso da consciência bate.\n");
            fe -= 10;
            tempo -= 5;
            break;
        default:
            printf("Escolha inválida. Considerando que você ignorou.\n");
            fe -= 10;
            tempo -= 5;
    }

    capitulo3();
}

// Capítulo 3
void capitulo3() {
    system("clear || cls");
    printf("\nCapítulo 3: Na escola\n");
    printf("Seu professor está distribuindo um trabalho surpresa em dupla.\n");
    printf("Um colega excluído pede para fazer com você.\n");
    printf("1 - Aceitar e incluir o colega\n");
    printf("2 - Recusar e ir com seu amigo popular\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Você mostra empatia e fortalece um laço inesperado.\n");
            fe += 20;
            break;
        case 2:
            printf("Você se diverte com seu amigo, mas o colega fica claramente chateado.\n");
            fe -= 10;
            break;
        default:
            printf("Escolha inválida. Considerando que recusou.\n");
            fe -= 10;
    }

    final();
}

// Final
void final() {
    system("clear || cls");
    printf("\n========== FINAL DO JOGO ==========\n");
    printf("Sua pontuação de fé final foi: %d\n", fe);

    if (fe >= 30) {
        printf("Final: Coração sensível\n");
        printf("Você viveu o dia com propósito, compaixão e conexão espiritual.\n");
    } else if (fe >= 10) {
        printf("Final: Caminho neutro\n");
        printf("Você teve boas intenções, mas ainda há espaço para crescer.\n");
    } else {
        printf("Final: Desconectado\n");
        printf("As escolhas revelam uma vida apressada e sem direção.\n");
    }

    printf("===================================\n");
    printf("Obrigado por jogar!\n");
}
