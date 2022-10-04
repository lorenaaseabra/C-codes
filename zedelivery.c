/*Desafio: Desenvolva um sistema de compra de bebidas. Este sistema, inicialmente, 
deve pedir para que o usuário informe a sua idade. Se a idade for menor que 18 anos, 
deve-se imprimir a seguinte mensagem: "você eh ​de menor e nao pode comprar bebidas".
Caso o usuário tenha idade suficiente, o sistema de apresentar o seguinte menu:

Whisky
Vodka
Cerveja
Cachaça**/ 

/*Se o usuário escolher outra opção, o sistema deve imprimir “opção inválida”. 
Se o usuário escolher a opção 1 (whisky), o seguinte menu deve ser impresso:

Código Nome Preço
100 Whisky1 200
101 Whisky2 150
102 Whisky3 140

Se o usuário escolher a opção 2 (Vodka), o seguinte menu deve ser impresso:

Código Nome Preço
200 Vodka1 60
201 Vodka2 40
202 Vodka3 30

Se o usuário escolher a opção 3 (Cerveja), o seguinte menu deve ser impresso:

Código Nome Preço
300 Cerveja1 1.50
301 Cerveja2 2.0
302 Cerveja3 3.0

Se o usuário escolher a opção 4 (Cachaça), o seguinte menu deve ser impresso:

Código Nome Preço
400 Cachaça1 8.0
401 Cachaça2 20.0
402 Cachaça3 22.0*/ 

/*Uma vez direcionado ao menu escolhido, o usuário pode escolher a bebida que deseja e a quantidade. 
Se a quantidade for menor que 1, o sistema deve imprimir “quantidade inválida”. 
Se a quantidade for válida, ou seja, maior ou igual a 1, caso o usuário compre mais de 5 bebidas, 
receber desconto de 10%. Se comprar mais de 50 bebidas, o desconto é de 30%. 
Acima de 100 bebidas o desconto é de 35%.

O sistema deve imprimir na tela a bebida comprada, a quantidade e o valor final a ser pago.*/

//ERRO MATEMATICA 

#include <stdio.h> 
#include <math.h>

int main(){
        int idade,op;
        printf("digite a sua idade: ");
        scanf("%d",&idade);

        if (idade<18){
                printf("voce eh menor de idade e nao pode comprar bebidas");
        }else{
                printf(" escolha uma opcao:\n 1-whisky\n 2-vodka\n 3-cerveja\n 4-cachaca\n");
                scanf("%d", &op);
                if(op>4 || op<1){
                        printf("opcao invalida");
                        //poderia usar o default para isso 
                }else{
                        int amount,bebida;
                        float value;
                        switch(op){
                                case 1:
                                        printf("codigo nome preco");
                                        printf("\n100  whisky1 200");
                                        printf("\n101  whisky2 150");
                                        printf("\n102  whisky3 140");
                                        printf("\nqual a bebida que voce deseja?");
                                        scanf("%d", &bebida);
                                        if(bebida==100){
                                                printf("digite a quantidade: ");
                                                scanf("%d",&amount);
                                                if(amount<1){
                                                        printf("quantidade invalida");
                                                }else{
                                                        if(amount<=5){
                                                                value = (amount*200);
                                                                printf("whisky1 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>5 && amount<=50){
                                                                value = ((amount*200)*(0.9));
                                                                printf("whisky1 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>50 && amount<100){
                                                                value = ((amount*200)*(0.7));
                                                                printf("whisky1 %d %.2f",amount,value);
                                                                break;
                                                        }else{
                                                                value = ((amount*200)*(0.65));
                                                                printf("whisky1 %d %.2f",amount,value);
                                                                break;
                                                        }
                                                }
                                        }else if(bebida==101){
                                                printf("digite a quantidade: ");
                                                scanf("%d",&amount);
                                                if(amount<1){
                                                        printf("quantidade invalida");
                                                }else{
                                                        if(amount<=5){
                                                                value = (amount*150);
                                                                printf("whisky2 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>5 && amount<=50){
                                                                value = ((amount*150)*(0.9));
                                                                printf("whisky2 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>50 && amount<6 && amount<100){
                                                                value = ((amount*150)*(0.7));
                                                                printf("whisky2 %d %.2f",amount,value);
                                                                break;
                                                        }else{
                                                                value = ((amount*150)*(0.65));
                                                                printf("whisky2 %d %.2f",amount,value);
                                                                break;
                                                        }
                                                }
                                        }else if(bebida==102){
                                                printf("digite a quantidade: ");
                                                scanf("%d",&amount);
                                                if(amount<1){
                                                        printf("quantidade invalida");
                                                }else{
                                                        if(amount<=5){
                                                                value = (amount*140);
                                                                printf("whisky3 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>5 && amount<=50){
                                                                value = ((amount*140)*(0.9));
                                                                printf("whisky3 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>50 && amount<6 && amount<100){
                                                                value = ((amount*140)*(0.7));
                                                                printf("whisky3 %d %.2f",amount,value);
                                                                break;
                                                        }else{
                                                                value = ((amount*140)*(0.65));
                                                                printf("whisky3 %d %.2f",amount,value);
                                                                break;
                                                        }
                                                }
                                        }else{
                                                printf("digite uma opcao valida");
                                        }

                                case 2:
                                        printf("codigo nome preco");
                                        printf("\n200  vodka1 60");
                                        printf("\n201  vodka2 40");
                                        printf("\n202  vodka3 30");
                                        printf("\nqual a bebida que voce deseja?");
                                        scanf("%d", &bebida);
                                        if(bebida==200){
                                                printf("digite a quantidade: ");
                                                scanf("%d",&amount);
                                                if(amount<1){
                                                        printf("quantidade invalida");
                                                }else{
                                                        if(amount<=5){
                                                                value = (amount*60);
                                                                printf("vodka1 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>5 && amount<=50){
                                                                value = ((amount*60)*(0.9));
                                                                printf("vodka1 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>50 && amount<6 && amount<100){
                                                                value = ((amount*60)*(0.7));
                                                                printf("vodka1 %d %.2f",amount,value);
                                                                break;
                                                        }else{
                                                                value = ((amount*60)*(0.65));
                                                                printf("vodka1 %d %.2f",amount,value);
                                                                break;
                                                        }
                                                }
                                        }else if(bebida==201){
                                                printf("digite a quantidade: ");
                                                scanf("%d",&amount);
                                                if(amount<1){
                                                        printf("quantidade invalida");
                                                }else{
                                                        if(amount<=5){
                                                                value = (amount*40);
                                                                printf("vodka2 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>5 && amount<=50){
                                                                value = ((amount*40)*(0.9));
                                                                printf("vodka2 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>50 && amount<6 && amount<100){
                                                                value = ((amount*40)*(0.7));
                                                                printf("vodka2 %d %.2f",amount,value);
                                                                break;
                                                        }else{
                                                                value = ((amount*40)*(0.65));
                                                                printf("vodka2 %d %.2f",amount,value);
                                                                break;
                                                        }
                                                }
                                        }else if(bebida==202){
                                                printf("digite a quantidade: ");
                                                scanf("%d",&amount);
                                                if(amount<1){
                                                        printf("quantidade invalida");
                                                }else{
                                                        if(amount<=5){
                                                                value = (amount*30);
                                                                printf("vodka3 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>5 && amount<=50){
                                                                value = ((amount*30)*(0.9));
                                                                printf("vodka3 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>50 && amount<6 && amount<100){
                                                                value = ((amount*30)*(0.7));
                                                                printf("vodka3 %d %.2f",amount,value);
                                                                break;
                                                        }else{
                                                                value = ((amount*30)*(0.65));
                                                                printf("vodka3 %d %.2f",amount,value);
                                                                break;
                                                        }
                                                }
                                        }else{
                                                printf("digite uma opcao valida");
                                        }

                                case 3:
                                        printf("codigo nome preco");
                                        printf("\n300  cerveja1 1.5");
                                        printf("\n301  cerveja2 2.0");
                                        printf("\n302  cerveja3 3.0");
                                        printf("\nqual a bebida que voce deseja?");
                                        scanf("%d", &bebida);
                                        if(bebida==300){
                                                printf("digite a quantidade: ");
                                                scanf("%d",&amount);
                                                if(amount<1){
                                                        printf("quantidade invalida");
                                                }else{
                                                        if(amount<=5){
                                                                value = (amount*1.5);
                                                                printf("cerveja1 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>5 && amount<=50){
                                                                value = ((amount*1.5)*(0.9));
                                                                printf("cerveja1 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>50 && amount<6 && amount<100){
                                                                value = ((amount*1.5)*(0.7));
                                                                printf("cerveja1 %d %.2f",amount,value);
                                                                break;
                                                        }else{
                                                                value = ((amount*1.5)*(0.65));
                                                                printf("cerveja1 %d %.2f",amount,value);
                                                                break;
                                                        }
                                                }
                                        }else if(bebida==301){
                                                printf("digite a quantidade: ");
                                                scanf("%d",&amount);
                                                if(amount<1){
                                                        printf("quantidade invalida");
                                                }else{
                                                        if(amount<=5){
                                                                value = (amount*2.0);
                                                                printf("cerveja2 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>5 && amount<=50){
                                                                value = ((amount*2.0)*(0.9));
                                                                printf("cerveja2 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>50 && amount<6 && amount<100){
                                                                value = ((amount*2.0)*(0.7));
                                                                printf("cerveja2 %d %.2f",amount,value);
                                                                break;
                                                        }else{
                                                                value = ((amount*2.0)*(0.65));
                                                                printf("cerveja2 %d %.2f",amount,value);
                                                                break;
                                                        }
                                                }
                                        }else if(bebida==302){
                                                printf("digite a quantidade: ");
                                                scanf("%d",&amount);
                                                if(amount<1){
                                                        printf("quantidade invalida");
                                                }else{
                                                        if(amount<=5){
                                                                value = (amount*3.0);
                                                                printf("cerveja3 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>5 && amount<=50){
                                                                value = ((amount*3.0)*(0.9));
                                                                printf("cereja3 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>50 && amount<6 && amount<100){
                                                                value = ((amount*3.0)*(0.7));
                                                                printf("cerveja3 %d %.2f",amount,value);
                                                                break;
                                                        }else{
                                                                value = ((amount*3.0)*(0.65));
                                                                printf("cerveja3 %d %.2f",amount,value);
                                                                break;
                                                        }
                                                }
                                        }else{
                                                printf("digite uma opcao valida");
                                        }

                                case 4:
                                        printf("codigo nome preco");
                                        printf("\n400  cachaca1 8.0");
                                        printf("\n401  cachaca2 20.0");
                                        printf("\n402  cachaca3 22.0");
                                        printf("\nqual a bebida que voce deseja?");
                                        scanf("%d", &bebida);
                                        if(bebida==400){
                                                printf("digite a quantidade: ");
                                                scanf("%d",&amount);
                                                if(amount<1){
                                                        printf("quantidade invalida");
                                                }else{
                                                        if(amount<=5){
                                                                value = (amount*8.0);
                                                                printf("cachaca1 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>5 && amount<=50){
                                                                value = ((amount*8.0)*(0.9));
                                                                printf("cachaca1 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>50 && amount<6 && amount<100){
                                                                value = ((amount*8.0)*(0.7));
                                                                printf("cachaca1 %d %.2f",amount,value);
                                                                break;
                                                        }else{
                                                                value = ((amount*8.0)*(0.65));
                                                                printf("cachaca1 %d %.2f",amount,value);
                                                                break;
                                                        }
                                                }
                                        }else if(bebida==401){
                                                printf("digite a quantidade: ");
                                                scanf("%d",&amount);
                                                if(amount<1){
                                                        printf("quantidade invalida");
                                                }else{
                                                        if(amount<=5){
                                                                value = (amount*20.0);
                                                                printf("cachaca2 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>5 && amount<=50){
                                                                value = ((amount*20.0)*(0.9));
                                                                printf("cachaca2 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>50 && amount<6 && amount<100){
                                                                value = ((amount*20.0)*(0.7));
                                                                printf("cachaca2 %d %.2f",amount,value);
                                                                break;
                                                        }else{
                                                                value = ((amount*20.0)*(0.65));
                                                                printf("cachaca2 %d %.2f",amount,value);
                                                                break;
                                                        }
                                                }
                                        }else if(bebida==402){
                                                printf("digite a quantidade: ");
                                                scanf("%d",&amount);
                                                if(amount<1){
                                                        printf("quantidade invalida");
                                                }else{
                                                        if(amount<=5){
                                                                value = (amount*22.0);
                                                                printf("cachaca3 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>5 && amount<=50){
                                                                value = ((amount*22.0)*(0.9));
                                                                printf("cachaca3 %d %.2f",amount,value);
                                                                break;
                                                        }else if(amount>50 && amount<6 && amount<100){
                                                                value = ((amount*22.0)*(0.7));
                                                                printf("cachaca3 %d %.2f",amount,value);
                                                                break;
                                                        }else{
                                                                value = ((amount*22.0)*(0.65));
                                                                printf("cachaca3 %d %.2f",amount,value);
                                                                break;
                                                        }
                                                }
                                        }else{
                                                printf("digite uma opcao valida");
                                        }

                        }
                }
        }
        return 0;
}