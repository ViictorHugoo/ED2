#include <stdio.h>

int main() {
    int linha, coluna;
    scanf("%d %d", &linha, &coluna);

    char lugares[2 * linha + 1][coluna + 1];
    
    for (int i = 0; i < 2 * linha; i++) {
        for (int j = 0; j < coluna; j++) {
            lugares[i][j] = '-';
        }
    }

    char entrada[3]; 

    
    while (scanf("%s", entrada) != EOF) {
        int acentoL = 2 * (entrada[0] - 'A');
        int acentoC = entrada[1] - '1'; 
        lugares[acentoL][acentoC] = 'X'; 
        lugares[acentoL + 1][acentoC] = 'X'; 
    }


    printf("  ");
    for (int i = 1; i <= coluna; i++) {
        printf("%2d", i); 
    }
    printf("\n");

    for (int i = 0; i < 2 * linha; i += 2) {
        printf("%c ", 'A' + i);
        for (int j = 0; j < coluna; j++) {
            printf("%2c", lugares[i][j]); 
        }
        printf("\n");
    }

    return 0;
}
