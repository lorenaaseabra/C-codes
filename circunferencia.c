//Desafio: Escreva um programa que peça ao usuário 3 valores reais: r, c1 e c2. 
//O primeiro representa o raio de uma circunferência, e os outros dois valores representam o centro.
//Peça para o usuário digitar mais dois valores reais: p1 e p2, que representam as coordenadas de um ponto. 
//Imprima “Estah dentro”, se o ponto (p1,p2) está dentro da circunferência, caso contrário, imprima “Estah fora”.

#include <stdio.h>
#include <math.h>

int main(){
        float r,c1,c2;
        float p1,p2,dist;
        printf("Digite r,c1 e c2 e p1 e p2: ");
        scanf("%f %f %f %f %f",&r,&c1,&c2,&p1,&p2);
        //printf("informe o valor de p1 e p2: ",p1,p2);
        //scanf("%.2f %.2f",&p1,&p2);

        //distancia entre dois pontos 
        
        dist = sqrt(((p1-c1)*(p1-c1))+((p2-c2)*(p2-c2)));
    
   
        if(dist <= r){
                printf("estah dentro");
        }else{
                printf("estah fora");
        }
        return 0;
}

//test com r=25 c(2;3) p(5;7) = 5 c1;c2 p1;p2 -> 