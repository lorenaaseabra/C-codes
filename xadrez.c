/*Desafio 1: 
Crie um programa que inicializa 10 pedras de xadrez aleatoriamente em um tabuleiro 8x8. Essas 10 pedras pertencem ao jogador1. O programa vai inicializar aleatoriamente 1 pedra para o jogador2, que trata-se de uma torre.

O programa deve informar se a torre do jogador2 é capaz de derrubar ao menos uma pedra do jogador1.
Em caso positivo, imprima “jogador2 derruba uma pedra”. Caso contrário, imprima “jogador2 não derruba nenhuma pedra”.

A figura abaixo mostra como uma torre se movimenta:*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() { 

        srand(time(NULL));
  
        int tab[8][8];

  /*Zerar tabuleiro*/
        for(int i = 0; i < 8; i++){
                for(int j = 0; j < 8; j++){
                        tab[i][j] = 0;
                        printf("%i ", tab[i][j]);
                }
                printf("\n");
        }

  /*Inicializacao do tabuleiro com peças do jog1*/
        for(int pedra = 1; pedra <= 4; ){
                int linha = rand()%8;
                int coluna = rand()%8;
                if(tab[linha][coluna] == 0){
                        tab[linha][coluna] = 1;
                        pedra++;
                }
        }  

  /*Inicializacao do tabuleiro peça do jog2*/
        int linha, coluna;
        for(int pedra = 1; pedra <= 1; ){
                linha = rand()%8;
                coluna = rand()%8;
                if(tab[linha][coluna] == 0){
                        tab[linha][coluna] = 2;
                        pedra++;
                }
        }

  /*Verificar se come ou nao*/
        int torre_x = linha;
        int torre_y = coluna;

        printf("\n\n");

  /*Imprimir tabuleiro*/
        for(int i = 0; i < 8; i++){
                for(int j = 0; j < 8; j++){
                        printf("%i ", tab[i][j]);
                }
                printf("\n");
        }

        printf("\n\n");
        int comeu = 0;

  //Cima/baixo
        for(int l = 0; l < 8; l++){
                if(tab[l][ torre_y] == 1){
                printf("Come vertical!");
                comeu = 1;
                break;
                }
        }
  //Esquerda/direita
        for(int c = 0; c < 8; c++){
                if(tab[torre_x][c] == 1){
                printf("Come horizontal!");
                comeu = 1;
                break;
                }
        }
        if(comeu==0){
                printf("não comeu");
        }
        return 0; 
}