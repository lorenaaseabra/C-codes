#include <stdio.h>

typedef struct
{
  char nome[30];
  int idade;
}Pessoa;

void preencher(Pessoa pessoas[], int tam)
{
  for(int i = 0; i < tam; i++)
    {
      scanf("%s %i", pessoas[i].nome, &pessoas[i].idade);
      getchar();
    }
}

void salvar(Pessoa pessoas[], int tam)
{
  FILE* file = fopen("pessoas.txt", "w");
 
  fwrite(pessoas, sizeof(Pessoa), tam, file);

  fclose(file);
}

void ler(Pessoa pessoas[], int tam)
{
  FILE* file = fopen("pessoas.txt", "r");

  fread(pessoas, sizeof(Pessoa), tam, file);

  fclose(file);
 
}

void imprimir(Pessoa pessoas[], int tam)
{
  for(int i = 0; i < tam; i++)
    {
      printf("%s possui %i anos\n", pessoas[i].nome, pessoas[i].idade);
    }
}

int main(void) {  
 
  Pessoa pessoas[2];
  ler(pessoas, 2);

 
  imprimir(pessoas, 2);
 
  return 0;
}