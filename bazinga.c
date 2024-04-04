#include <stdio.h>
#include <string.h>

int main(){
    char sheldon[8], raj[8];
    char pedra[8] = "pedra", papel[8] = "papel", tesoura[8] = "tesoura", lagarto[8] = "lagarto", Spock[8] = "Spock";
    
    scanf("%s %s", sheldon, raj);

    if(strcmp(sheldon, raj) == 0)
        printf("De novo!\n");
    else if(strcmp(tesoura, sheldon) == 0 && strcmp(papel, raj) == 0)
        printf("Bazinga!\n");
    else if(strcmp(papel, sheldon) == 0 && strcmp(pedra, raj) == 0)
        printf("Bazinga!\n");
    else if(strcmp(pedra, sheldon) == 0 && strcmp(lagarto, raj) == 0)
        printf("Bazinga!\n");
    else if(strcmp(lagarto, sheldon) == 0 && strcmp(Spock, raj) == 0)
        printf("Bazinga!\n");
    else if(strcmp(Spock, sheldon) == 0 && strcmp(tesoura, raj) == 0)
        printf("Bazinga!\n");
    else if(strcmp(tesoura, sheldon) == 0 && strcmp(lagarto, raj) == 0)
        printf("Bazinga!\n");
    else if(strcmp(lagarto, sheldon) == 0 && strcmp(papel, raj)== 0)
        printf("Bazinga!\n");
    else if(strcmp(papel, sheldon) == 0 && strcmp(Spock, raj)== 0)
        printf("Bazinga!\n");
    else if(strcmp(Spock, sheldon) == 0 && strcmp(pedra, raj)== 0)
        printf("Bazinga!\n");
    else if(strcmp(pedra, sheldon) == 0 && strcmp(tesoura, raj)== 0)
        printf("Bazinga!\n");
    else if(strcmp(tesoura, raj) == 0 && strcmp(papel, sheldon) == 0)
        printf("Raj trapaceou!\n");
    else if(strcmp(papel, raj) == 0 && strcmp(pedra, sheldon) == 0)
        printf("Raj trapaceou!\n");
    else if(strcmp(pedra, raj) == 0 && strcmp(lagarto, sheldon) == 0)
        printf("Raj trapaceou!\n");
    else if(strcmp(lagarto, raj) == 0 && strcmp(Spock, sheldon) == 0)
        printf("Raj trapaceou!\n");
    else if(strcmp(Spock, raj) == 0 && strcmp(tesoura, sheldon) == 0)
        printf("Raj trapaceou!\n");
    else if(strcmp(tesoura, raj) == 0 && strcmp(lagarto, sheldon) == 0)
        printf("Raj trapaceou!\n");
    else if(strcmp(lagarto, raj) == 0 && strcmp(papel, sheldon) == 0)
        printf("Raj trapaceou!\n");
    else if(strcmp(papel, raj) == 0 && strcmp(Spock, sheldon) == 0)
        printf("Raj trapaceou!\n");
    else if(strcmp(Spock, raj) == 0 && strcmp(pedra, sheldon) == 0)
        printf("Raj trapaceou!\n");
    else if(strcmp(pedra, raj) == 0 && strcmp(tesoura, sheldon) == 0)
        printf("Raj trapaceou!\n");


    return 0;
}

