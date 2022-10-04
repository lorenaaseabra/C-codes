#include <stdio.h>
#include <stdlib.h>

// Um nó de uma árvore
struct node {

    int dado;
    struct node *esquerda;
    struct node *direita;
    int altura;

};

int pega_altura(struct node *no)
{
    if (no == NULL) return 0;
    return no->altura;
}

int maximo(int a, int b)
{

    return a > b ? a : b;

}


struct node *novo_no(int dado)
{

    struct node *no = malloc(sizeof(struct node));
    no->dado = dado;
    no->esquerda = NULL;
    no->direita = NULL;
    no->altura = 1;

    return no;

}

int pega_balanceamento(struct node *no)
{

    if (no == NULL) return 0;
    return pega_altura(no->esquerda) - pega_altura(no->direita);

}

struct node *rotacao_esquerda(struct node *no)
{

    struct node *temp1 = no->direita;
    struct node *temp2 = temp1->esquerda;

    //Faz a rotação
    temp1->esquerda = no;
    no->direita = temp2;

    //Atualiza as alturas
    no->altura = 1 + maximo(pega_altura(no->esquerda), pega_altura(no->direita));
    temp1->altura = 1 + maximo(pega_altura(temp1->esquerda), pega_altura(temp1->direita));

    //Retorna a nova arvore
    return temp1;
}

struct node *rotacao_direita(struct node *no)
{
    struct node *temp1 = no->esquerda;
    struct node *temp2 = temp1->direita;

    //Faz a rotação
    temp1->direita = no;
    no->esquerda = temp2;

    //Atualiza as alturas
    no->altura = 1 + maximo(pega_altura(no->esquerda), pega_altura(no->direita));
    temp1->altura = 1 + maximo(pega_altura(temp1->esquerda), pega_altura(temp1->direita));

    //Retorna a nova raiz
    return temp1;
}

// Função recursiva para inserir um nó em uma árvore
// balanceando-a posteriormente se necessário

struct node *inserir(int dado, struct node *no)
{

    //1. Fazer a inserção normalmente
    if (no == NULL) return novo_no(dado);

    if (dado < no->dado) no->esquerda = inserir(dado, no->esquerda);
    else if (dado > no->dado) no->direita = inserir(dado, no->direita);
    else return no;  //Não podem haver dados repetidos em BST

    //2. Atualizar a altura da raiz
    no->altura = 1 + maximo(pega_altura(no->esquerda), pega_altura(no->direita));

    //3. Calcular o fator de balanceamento para saber se a árvore ficou desbalanceada
    int fator_balanceamento = pega_balanceamento(no);

    //Se o nó ficou desbalanceado, ou seja, FB > 1 ou < -1, teremos 4 casos:

    if (fator_balanceamento > 1 && dado < no->esquerda->dado) return rotacao_direita(no);
    if (fator_balanceamento < -1 && dado > no->direita->dado) return rotacao_esquerda(no);
    if (fator_balanceamento > 1 && dado > no->esquerda->dado) {

        no->esquerda = rotacao_esquerda(no->esquerda);
        return rotacao_direita(no);
    }
    if (fator_balanceamento < -1 && dado < no->direita->dado) {

        no->direita = rotacao_direita(no->direita);
        return rotacao_esquerda(no);
    }

    return no;
}

void preOrder(struct node *root)
{
	if(root != NULL)
	{
		printf("%d\n", root->dado);
		preOrder(root->esquerda);
		preOrder(root->direita);
	}
}


int main()
{

    struct node *raiz = NULL;

    raiz = inserir(20, raiz);
    raiz = inserir(10, raiz);
    raiz = inserir(30, raiz);
    raiz = inserir(40, raiz);
    raiz = inserir(7, raiz);
    raiz = inserir(2, raiz);
    raiz = inserir(5, raiz);
    raiz = inserir(34, raiz);
    raiz = inserir(45, raiz);
    raiz = inserir(46, raiz);

    preOrder(raiz);
    
    
    return 0;
}