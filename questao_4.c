/* Você é professor e está responsável por 1 disciplina com 20 alunos. Cada aluno possui um nome e uma. 
Você deve imprimir:

A média da turma
A maior e a menor da turma e o nome dos respectivos alunos.
 */

#include <stdio.h>
#include <string.h>
#define N 3

typedef struct{
        float nota;
        char nome[50];
}ALUNO;

float calculomedia(ALUNO alunos[]){
        int j;
        float soma = 0;
        for(j=0;j<N;j++){
                soma += alunos[j].nota;
        }
        return soma/N;
        /* float media = calculomedia(alunos);
        printf("média: %.2f", media); */
}

int ordem(ALUNO alunos []){
        //int k;
        float maior;
        ALUNO aux;
        //ALUNO maior;
        //for(k=0;k<20;k++){

        for (maior = 0; maior<N-1 ; maior++){
                for(int j = 0; j<N-1; j++){
                        if(alunos[j].nota > alunos[j+1].nota){
                                aux = alunos[j];
                                alunos[j] = alunos[j+1];
                                alunos[j+1] = aux;

                                
                        }
                }
        } 
                
        printf("%f %f",alunos[0].nota, alunos[N-1].nota);
        
        
        /* for(maior=0;maior<N;maior++){
                printf("%f %f", aux[0], aux[N]);
        } */

        
}


int main(){
        ALUNO alunos[N];
        int i;
        for(i=0;i<N;i++){
                scanf("%f %s",&alunos[i].nota, alunos[i].nome);
                getchar();
                printf("%f %s\n", alunos[i].nota, alunos[i].nome);
        }
        

        float media = calculomedia(alunos);
        printf("média: %.2f", media);

        ordem(alunos);

        return 0;
}


/* Você é professor e está responsável por 1 disciplina com 20 alunos. Cada aluno possui um nome e uma. 
Você deve imprimir:

A média da turma
A maior e a menor da turma e o nome dos respectivos alunos.
 */

#include <stdio.h>
#include <string.h>
#define N 3

typedef struct{
        float nota;
        char nome[50];
}ALUNO;

float calculomedia(ALUNO alunos[]){
        int j;
        float soma = 0;
        for(j=0;j<N;j++){
                soma += alunos[j].nota;
        }
        return soma/N;
        /* float media = calculomedia(alunos);
        printf("média: %.2f", media); */
}

int ordem(ALUNO alunos []){
        //int k;
        float maior;
        ALUNO aux;
        //ALUNO maior;
        //for(k=0;k<20;k++){

        for (maior = 0; maior<N-1 ; maior++){
                for(int j = 0; j<N-1; j++){
                        if(alunos[j].nota > alunos[j+1].nota){
                                aux = alunos[j];
                                alunos[j] = alunos[j+1];
                                alunos[j+1] = aux;

                                
                        }
                }
        } 
                
        printf("%f %f",alunos[0].nota, alunos[N-1].nota);
        
        
        /* for(maior=0;maior<N;maior++){
                printf("%f %f", aux[0], aux[N]);
        } */

        
}


int main(){
        ALUNO alunos[N];
        int i;
        for(i=0;i<N;i++){
                scanf("%f %s",&alunos[i].nota, alunos[i].nome);
                getchar();
                printf("%f %s\n", alunos[i].nota, alunos[i].nome);
        }
        

        float media = calculomedia(alunos);
        printf("média: %.2f", media);

        printf("\n");
        ordem(alunos);

        return 0;
}


