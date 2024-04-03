#include <stdio.h>

int calcMedia(int qtd, int *vet);

int main(){

    int qtd, count = 0;
    scanf("%d", &qtd);

    int vet[qtd];
    for(int i = 0; i < qtd; i++)
        scanf("%d", &vet[i]);
    
    int media = calcMedia(qtd, vet);

    for(int i = 0; i < qtd; i++){
        if(vet[i] > media && count == 0){
            printf("%d", vet[i]);
            count++;
        } else if (vet[i] > media){
            printf(" %d", vet[i]);
            count++;
        }
    }

    if(count == 0)
        printf("0");

    printf("\n");
    return 0;
}

int calcMedia(int qtd, int *vet){
    int sum = 0;
    for(int i = 0; i < qtd; i++)
        sum += vet[i];
    
    return sum/qtd;
}