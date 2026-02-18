#include<stdio.h>
#include<string.h>

typedef struct ALUNO_{
char nome[40];
float nota;
} ALUNO;


int main()
    {
    int i, cont=0;
    ALUNO atual;
    FILE *fp;
    fp = fopen("turma.dat", "r+b");

    while(!feof(fp)) // conta quantos alunos tem
        {
        if(fread(&atual, sizeof(ALUNO), 1, fp))
        	{
        	cont++;
			}
        }

	rewind(fp);

	for(i=0; i<cont; i++)
		{
		fseek(fp, i*sizeof(ALUNO), SEEK_SET);
		fread(&atual, sizeof(ALUNO), 1, fp);		
		atual.nota = atual.nota * 1.1;
		fseek(fp, i*sizeof(ALUNO), SEEK_SET);
		fwrite(&atual, sizeof(ALUNO), 1, fp);
		}

	rewind(fp);

    while(!feof(fp))
        {
        if(fread(&atual, sizeof(ALUNO), 1, fp))
        	{
        	printf("%s %f\n", atual.nome, atual.nota);
			}
        }
	fclose(fp);
    return 0;    
    }
    

