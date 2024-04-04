#include <stdio.h>

//A = 65 Z = 90

int main(){
    int linha, coluna;
    scanf("%d %d", &linha, &coluna);

    char lugares[2*linha+1][coluna+1];
    for(int i = 0; i < 2*linha; i++){
        for(int j = 0; j < coluna; j++){
            lugares[i][j] = '-';
        }
    }

    char entrada[2];
    
    while (scanf("%s", entrada) != EOF){
        int acentoL = 2*(entrada[0]-65), acentoC = entrada[1]-49;
        lugares[acentoL][acentoC] = 'x';
        lugares[acentoL+1][acentoC] = 'x';
    }
    
    printf("entrei");
    printf(" ");
    for(int i = 1; i <= coluna; i++){
        if(i < 10){
            printf(" 0%d", i);
        } else {
            printf("%d", i);
        }
    }
    printf("\n");

    for(int i = 0; i < linha; i++){
        printf("%c", 65+i);
        for(int j = 0; i < coluna; i++){
            printf(" %c%c", lugares[i][j]);
        }
        printf("\n");
    }

    return 0;
}