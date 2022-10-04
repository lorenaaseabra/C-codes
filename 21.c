/*Questão 4: O cardápio de uma lancheria é o seguinte: 

Especificação Código Preço
Cachorro quente 100 1.20
Bauru simples 101 1.30
Bauru com ovo 102 1.50 
Hamburger 103 1.20 
Cheeseburguer 104 1.30 
Refrigerante 105 1.00 

Implemente um programa que leia o código do item pedido, a quantidade e calcule o valor
a ser pago por aquele lanche. Use o comando switch*/

#include <stdio.h>
#include <stdlib.h>

int main(){
        printf("cardapio: \n");
        printf("|Especificacao   | codigo |preco|\n");
        printf("|Cachorro quente |   100  | 1.20|\n");
        printf("|Bauru simples   |   101  | 1.30|\n");
        printf("|Bauru com ovo   |   102  | 1.50|\n");
        printf("|Hamburguer      |   103  | 1.20|\n");
        printf("|Cheeseburguer   |   104  | 1.30|\n");
        printf("|Refrigerante    |   105  | 1.00|\n");

        int op;
        float qnt;
        printf("\n\nDigie a opcao que voce deseja: "); // pq n pega pelo codigo (se pede p pegar pelo cod, usaria um if?) e sim pelo numero correspondente?
        scanf("%d",&op);
        printf("Digite a quantidade que vc quer: ");
        scanf("%f",&qnt);

        switch(op){
                case 1:
                        printf("voce vai pagar: %.2f reais",(1.20*qnt));break;
                case 2:
                        printf("voce vai pagar: %.2f reais",(1.30*qnt));break;
                case 3:
                        printf("voce vai pagar: %.2f reais",(1.50*qnt));break;
                case 4:
                        printf("voce vai pagar: %.2f reais",(1.20*qnt));break;
                case 5:
                        printf("voce vai pagar: %.2f reais",(1.30*qnt));break;
                case 6:
                        printf("voce vai pagar: %.2f reais",(1.00*qnt));break;
                default:
                        printf("escolha uma opcao valida ");
        }
        return 0;

}
