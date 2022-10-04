/*Questão 3: Escreva o menu de opções abaixo. 
Menu:
Leia a opção do usuário e execute a operação escolhida. Escreva uma mensagem de erro se a opção for inválida.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
        printf("menu: ");
        printf("1-Raiz quadrada de um numero\n");
        printf("2-Seno de um numero\n");
        printf("3-Produto entre o quadrado de um numero e o coseno de outro numero\n");
        printf("4-Soma entre 2 numeros\n");
        
        int op;
        float n1 = rand();
        float n2 = rand();

        printf("\n\nDigie a opcao que voce deseja: ");
        scanf("%i",&op);

        switch(op){
                case 1:
                        printf("%.2f",pow(n1,2));break;
                case 2:
                        printf("%.2f",sin(n1));break;
                case 3:
                        printf("%.2f",pow(n1,2)*cos(n2));break;
                case 4: 
                        printf("%.2f",n1+n2);break;
        }
        return 0;
}