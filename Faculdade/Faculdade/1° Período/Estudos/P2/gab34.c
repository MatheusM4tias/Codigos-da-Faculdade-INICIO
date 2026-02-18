//ler um arquivo texto de um arquivo entrada.txt, gravar em um arquivo texto saida.txt
//depois voltar ao inicio do arquivo saida.txt e imprimir seu conteúdo na tela.

#include<stdio.h>
int main()
	{
	FILE *entrada, *saida;
	entrada = fopen("entrada.txt", "rt");
	saida = fopen("saida.txt", "w+t"); //imprimir e depois ler o conteudo

	char texto[401];
	while(!feof(entrada))	
		{
		fgets(texto, 400, entrada);
		fprintf(saida, "%s", texto);
		}

	rewind(saida);
	while(!feof(saida))	
		{
		fgets(texto, 400, saida);
		printf("%s", texto);
		}
	fclose(entrada);
	fclose(saida);
	return 0;
	}
