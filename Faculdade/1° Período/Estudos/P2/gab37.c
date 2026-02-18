#include<stdio.h> // Gabarito Quest~ao 3
#include<string.h>
int main()
    {
    char nome[21];
    char linha[101];
    char coluna[101];
    int i=0, j=0, k = 2;
    scanf("%s", nome);
    FILE *entrada, *saida;
    entrada = fopen(nome, "rt");
    saida = fopen("saida.txt", "w+t");
    while(j < k-1)
        {
        while(!feof(entrada))
            {
            k = strlen(linha);
            fgets(linha, 101, entrada);
            coluna[i] = linha[j];
            i++;
            }
        coluna[i] = '\0';
        fprintf(saida, "%s\n", coluna);
        rewind(entrada);
        i = 0;
        j++;
        }
    rewind(saida);
    while(!feof(saida))
        {
        if(fgets(linha, 100, saida)!=NULL)
        printf("%s", linha);
        }
    fclose(entrada);
    fclose(saida);  
    return 0;
    }
