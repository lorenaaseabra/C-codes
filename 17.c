/* Questão 6: Você está desenvolvendo um sistema de controle de acesso a cinema. 
Este sistema deve pedir a idade do usuário, e em seguida imprimir as opções de filmes: 

Titanic (16 anos) 
Pica Pau (Livre) 
A volta de Jason (18 anos) 
Desistir 

Se o usuário escolher o filme e não tiver idade suficiente, 
o sistema deve imprimir "Voce nao tem idade para assistir ao filme". Caso o usuário tenha idade para o filme,
 o sistema imprime "Você comprou o filme tal. Bom filme!".
 */
#include <stdio.h>
int main(){
        int idade,op;

        printf("qual a sua idade? ", idade);
        scanf("%i", &idade);
        printf("escolha uma opiao: \n1-titanic\n2-pica pau\n3-a volta de jason\n4-desistir\n", op);
        scanf("%i",&op);

        if(op==1){
                if(idade<16){
                        printf("Voce nao tem idade para assistir ao filme");
                }else{
                        printf("Você comprou o filme tal. Bom filme!");
                }
        }else if(op==2){
                printf("Voce nao tem idade para assistir ao filme");
        }else if(op==3){
                if(idade<18){
                        printf("Voce nao tem idade para assistir ao filme");
                }else{
                        printf("Você comprou o filme tal. Bom filme!");
                }
        }else{
                ("voce desisitiu, que pena");
        }       
        return 0;

}