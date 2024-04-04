#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

void imprime (celula *le);
void imprime_rec (celula *le);

void insere_inicio (celula *le, int x);
void insere_antes (celula *le, int x, int y);

int remove_depois (celula *p);
void remove_elemento (celula *le, int x);
void remove_todos_elementos (celula *le, int x);

celula *busca (celula *le, int x);
celula *busca_rec (celula *le, int x);

void mescla_listas (celula *l1, celula *l2, celula *l3);

void imprime(celula *le) {
    if (le == NULL) {
        printf("NULL\n");
        return;
    }

    while (le != NULL) {
        printf("%d -> ", le->dado);
        le = le->prox;
    }
    printf("NULL\n");
}

void imprime_rec(celula *le){
    if(le == NULL){
        printf("NULL\n");
        return;
    }
    printf("%d -> ", le->dado);
    imprime_rec(le->prox);
}