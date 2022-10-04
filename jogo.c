#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Um personagem é inicializado aleatoriamente em um cenario de 20 metros quadrados.

Neste cenarios há 10 obstaculos, 10 inimigos e 5 municoes.

O personagem movimenta-se pelo cenario atraves dos comandos 'w'(cima), 'a'(esquerda), 's'(baixo), 'd'(direita).

O personagem não é perimitido se movimentar em direcao a um obstaculo

O personagem pode pegar municao


*/

int main() {

  srand(time(NULL));
 
  int tam = 10;
  char cenario[tam][tam];

  /*Zerar matriz*/
  for(int l = 0; l < tam; l++)
    {
      for(int c = 0; c < tam; c++)
        {
          cenario[l][c] = '_';
        }
    }

  /*Inicializar 10 obstaculos*/
  for(int obstaculo = 1; obstaculo <= 10; )
    {
      int o_l = rand()%tam;
      int o_c = rand()%tam;
     
      if(cenario[o_l][o_c] == '_')
      {
        cenario[o_l][o_c] = 'X';
        obstaculo++;
      }
    }

  for(int inimigo = 1; inimigo <= 10; )
    {
      int i_l = rand()%tam;
      int i_c = rand()%tam;

      if(cenario[i_l][i_c] == '_')
      {
        cenario[i_l][i_c] = 'E';
        inimigo++;
      }
    }
 
  for(int municao = 1; municao <= 5; )
    {
      int m_l = rand()%tam;
      int m_c = rand()%tam;

      if(cenario[m_l][m_c] == '_')
      {
        cenario[m_l][m_c] = '.';
        municao++;
      }
    }

  /*Inicilizar personagem*/
  int p_l, p_c;
 
  for(int personagem = 1; personagem <= 1; )
    {
      p_l = rand()%tam;
      p_c = rand()%tam;

      if(cenario[p_l][p_c] == '_')
      {
        cenario[p_l][p_c] = 'P';
        personagem++;
      }
    }

  int municao = 0, HP = 100;
  int penalidade = 20;
 
  do
  {
    /*Imprimir cenario*/
    for(int l = 0; l < tam; l++)
      {
        for(int c = 0; c < tam; c++)
          {
            printf("%c ", cenario[l][c]);
          }
        printf("\n");
      }
    printf("\nHP: %i, Municao: %i\n", HP, municao);

    char movimento;
   
    printf("\n> ");
    scanf("%c", &movimento);
    getchar();

    switch(movimento)
      {
        case 'w':

          if(p_l-1 >= 0 && cenario[p_l-1][p_c] != 'X')
          {
            if(cenario[p_l-1][p_c] == '.')
            {
              municao++;
            }
            else if(cenario[p_l-1][p_c] == 'E')
            {
              if(municao == 0)
              {
                HP -= penalidade;
              }
              else
              {
                municao--;
              }
            }
           
            cenario[p_l][p_c] = '_';
            cenario[p_l-1][p_c] = 'P';

            p_l--;
          }
          break;
       
        case 's':
          if(p_l+1 < tam && cenario[p_l+1][p_c] != 'X')
          {
            if(cenario[p_l+1][p_c] == '.')
            {
              municao++;
            }
            else if(cenario[p_l+1][p_c] == 'E')
            {
              if(municao == 0)
              {
                HP -= penalidade;
              }
              else
              {
                municao--;
              }
            }
           
            cenario[p_l][p_c] = '_';
            cenario[p_l+1][p_c] = 'P';
 
            p_l++;
          }
         
          break;
        case 'a':
          if(p_c-1 >= 0 && cenario[p_l][p_c-1] != 'X')
          {
            if(cenario[p_l][p_c-1] == '.')
            {
              municao++;
            }
            else if(cenario[p_l][p_c-1] == 'E')
            {
              if(municao == 0)
              {
                HP -= penalidade;
              }
              else
              {
                municao--;
              }
            }
           
            cenario[p_l][p_c] = '_';
            cenario[p_l][p_c-1] = 'P';
   
            p_c--;
          }
         
          break;
        case 'd':
          if(p_c+1 < tam && cenario[p_l][p_c+1] != 'X')
          {
            if(cenario[p_l][p_c+1] == '.')
            {
              municao++;
            }
            else if(cenario[p_l][p_c+1] == 'E')
            {
              if(municao == 0)
              {
                HP -= penalidade;
              }
              else
              {
                municao--;
              }
            }
           
            cenario[p_l][p_c] = '_';
            cenario[p_l][p_c+1] = 'P';
   
            p_c++;
          }
         
          break;
       
        default:
          printf("Opcao invalida");
      }

    system("@cls||clear");
   
  }while(HP > 0);

  printf("\n\nMorreu!");
 
 
 
  return 0;
  }