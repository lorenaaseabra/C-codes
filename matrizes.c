#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int tam, int matriz[tam][tam])
{
  for(int l = 0; l < tam; l++)
    {
      for(int c = 0; c < tam; c++)
        {
          matriz[l][c] = rand()%10;
        }
    }
}

void imprimir(int tam, int matriz[tam][tam])
{
  for(int l = 0; l < tam; l++)
    {
      for(int c = 0; c < tam; c++)
        {
          printf("%i ", matriz[l][c]);
        }
      printf("\n");
    }
}

void imprimirSoma(int tam, int m1[tam][tam], int m2[tam][tam])
{
  for(int l = 0; l < tam; l++)
    {
      for(int c = 0; c < tam; c++)
        {
          printf("%i ", m1[l][c]+m2[l][c]);
        }
      printf("\n");
    }
}

int main() {
  //srand(time(NULL));

  int tam = 5;
  int mat[tam][tam], mat2[tam][tam];


  preencher(tam, mat);
  mat[0][0] = 1;

  imprimir(tam, mat);
 
 
 
  return 0;
} 