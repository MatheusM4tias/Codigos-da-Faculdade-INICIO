#include<stdio.h>
#include<string.h>

typedef struct CLIENTE_
	{
	char nome[41];
	int idade;
	char endereco[101];
	float renda;
	} CLIENTE;

void ordena(CLIENTE lista[], int cont);

int main()
    {
    int cont=0;
    CLIENTE atual;
    FILE *fp, *saida;
    fp = fopen("dados.dat", "rb");
    saida = fopen("dados_ordenados.dat", "w+b");

    while(!feof(fp)) // conta quantos clientes tem
        {
        if(fread(&atual, sizeof(CLIENTE), 1, fp))
        	{
        	cont++;
			}
        }

	rewind(fp);
	CLIENTE lista[cont];
	CLIENTE lista2[cont];

	fread(lista, sizeof(CLIENTE), cont, fp);

	ordena(lista, cont);

	fwrite(lista, sizeof(CLIENTE), cont, saida);

	rewind(saida);

    while(!feof(saida))
        {
        if(fread(&atual, sizeof(CLIENTE), 1, saida))
        	{
        	printf("%s %d %s %f\n", atual.nome, atual.idade, atual.endereco, atual.renda);
			}
        }
	fclose(fp);
    fclose(saida);
    return 0;    
    }
    
void ordena(CLIENTE lista[], int cont)
	{
	int i, j;	
	CLIENTE temp;
	for(i=0; i<cont;i++)
		for(j=0; j<cont-i-1; j++)
			if(lista[j].idade>lista[j+1].idade)
				{
				temp = lista[j];
				lista[j] = lista[j+1];
				lista[j+1] = temp;
				}
	}
