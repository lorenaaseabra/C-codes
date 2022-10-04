/*Descrição do jogo:
O jogo da forca é um jogo em que o jogador tem que acertar qual é a palavra proposta, 
tendo como dica o número de letras e o tema ligado à palavra. 
A cada letra errada, o usuário perde uma try (o número é determinado pelo programador). 
O jogo termina ou com o acerto da palavra ou com o término do número de tentativas.
Para começar o jogo se imprime um underline correspondente ao lugar de cada letra.
Por exemplo, para a palavra "AMOR", se escreve:
A M O R ------> _ _ _ _
O jogador que tenta adivinhar a palavra deve ir dizendo as letras que podem existir na palavra. 
Cada letra que ele acerta é escrita no espaço correspondente.
A M O R→ A _ O R
Caso a letra não exista nessa palavra, imprime-se que a letra está incorreta, 
e reduz-se o número de tentativas.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main() {
  
        char word[] = "amor";
        int tam = strlen(word);
        char try[tam+1];

        for(int i = 0; i < tam; i++){
                try[i] = '_';
        }
        
        int chances = tam;

        while(strcmp(word, try) != 0 && chances > 0){
                printf("Status: ");
                for(int i = 0; i < tam; i++){
                        printf("%c ", try[i]);
                }

                char letra;
                printf("\n\nDigite uma letra: ");
                scanf("%c", &letra);
                getchar();
                
                int acerto = 0;
        
                for(int i = 0; i < tam; i++){
                        if(letra == word[i]){
                                try[i] = letra;
                                acerto = 1;
                        }
                }

                if(acerto == 0){
                        chances--;
                }
                printf("\n");
        }

//VIDAS
        if(chances > 0){
                printf("a"); 
        }else{
                printf("Voce morreu!");
        }
        
        return 0;
}