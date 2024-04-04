#include <stdio.h>

typedef struct celula {
   int dado;
   struct celula *prox;
} celula;


void imprime (celula *le){
    if(le == NULL){
        printf("NULL\n");
        return;
    }
    
    while(le != NULL){
        printf("%d -> ", le->dado);
        le = le->prox;
    }
    printf("NULL\n");
    return;
}

void imprime_rec(celula *le){
    if(le == NULL){
        printf("NULL\n");
        return;
    }
    printf("%d -> ", le->dado);
    imprime_rec(le->prox);
}