#include <stdio.h>

int main() {
    FILE *entrada, *saida;
    char texto[401];
    
    entrada = fopen("entrada.txt", "rt");
    saida = fopen("saida.txt", "wt");
    
    while (fgets(texto, 401, entrada) != NULL) {
        for (int i = 0; texto[i] != '\0'; i++) {
            if (texto[i] == 'A' || texto[i] == 'a') {
                texto[i] = '4';
            } else if (texto[i] == 'E' || texto[i] == 'e') {
                texto[i] = '3';
            } else if (texto[i] == 'I' || texto[i] == 'i') {
                texto[i] = '1';
            } else if (texto[i] == 'O' || texto[i] == 'o') {
                texto[i] = '0';
            }
        }
        fprintf(saida, "%s", texto);
    }

    fclose(entrada);
    fclose(saida);
    
    saida = fopen("saida.txt", "rt");
    while (fgets(texto, 401, saida) != NULL) {
         printf("%s", texto);
        }
    fclose(saida);
    
    
    return 0;
}
