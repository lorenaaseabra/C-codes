/* Implemente um jogo da velha. Este jogo deve ser jogado entre 2 jogadores e cada jogada 
deve ser impressa na tela mostrando o estado atual do jogo. 
O jogo da velha deve ser impresso da seguinte forma:

0 0 0
0 0 0
0 0 0

Onde os 0s são espaços que podem ser preenchidos pelo jogadores. 
O jogo deve informar o resultado final: empate ou vitória de um dos jogadores.
*/



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void zerar(int tam, char velha[tam][tam]){
        for(int l = 0; l < tam; l++){
                for(int c = 0; c < tam; c++){
                        velha[l][c] = '0';
                }
        }
}

void imprimir(int tam, char velha[tam][tam]){
        for(int l = 0; l < tam; l++){
                for(int c = 0; c < tam; c++){
                        printf("%c ", velha[l][c]);
                }
                printf("\n");
        }
}

int endgame(int tam, char velha[tam][tam]){
  //linhas
        for(int l = 0; l < tam; l++){
                if(velha[l][0] == 'X' && velha[l][1] == 'X' && velha[l][2] == 'X'){
                        return 1;
                }
                if(velha[l][0] == 'O' && velha[l][1] == 'O' && velha[l][2] == 'O'){
                        return 2;
                }
        }

  //colunas
        for(int c = 0; c < tam; c++){
                if(velha[0][c] == 'X' && velha[1][c] == 'X' && velha[2][c] == 'X'){
                        return 1;
                }
                if(velha[0][c] == 'O' && velha[1][c] == 'O' && velha[2][c] == 'O'){
                        return 2;
                }
        }   

  //diagonal principal
        if(velha[0][0] == 'X' && velha[1][1] == 'X' && velha[2][2] == 'X'){
                return 1;
        }
        if(velha[0][0] == 'O' && velha[1][1] == 'O' && velha[2][2] == 'O'){
                return 2;
        }

  //diagonal contraria
        if(velha[2][0] == 'X' && velha[1][1] == 'X' && velha[0][2] == 'X'){
                return 1;
        }
        if(velha[2][0] == 'O' && velha[1][1] == 'O' && velha[0][2] == 'O'){
                return 2;
        }

  //verificar fim ou cont 
        for(int l = 0; l < tam; l++){
                for(int c = 0; c < tam; c++){
                        if(velha[l][c] == '0'){
                                return -1;
                        }
                }
        }
        return 0;
}


int main(void) {

        srand(time(NULL));
        char velha[3][3];
        zerar(3, velha);
        int jogador = 1+rand()%2;//Jogador 1: X, jogador 2: O
        int statusJogo = -1;
 
        do{
                imprimir(3, velha);
   
                int locX, locY;
   
                printf("Jogador %i informe a posicao que deseja jogar: ", jogador);
                scanf("%i %i", &locX, &locY);
                getchar();

                if(jogador == 1){
                        if(velha[locX][locY] == '0'){
                                velha[locX][locY] = 'X';
                                jogador = 2;
                        }else{
                                printf("\n\nposicao ocupada\n");
                        }
                }else{
                        if(velha[locX][locY] == '0'){
                                velha[locX][locY] = 'O';
                                jogador = 1;
                        }else{
                                printf("\n\nposicao ocupada\n");
                        }
                }

                statusJogo = endgame(3, velha);

                if(statusJogo == 1){
                        printf("%i ganhou", jogador);
                }else if(statusJogo == 2){
                        printf("%i ganhou", jogador);
                }else if(statusJogo == 0){
                        printf("deu velha");
                }
                
        }while(statusJogo == -1);
   
        return 0;
}