#include <stdio.h>
#include <stdlib.h>

char faction;
int currency = 0;

void diff();
void fact();

int main(){

    diff();
    fact();
    return 0;
    }


void diff(){
    char difficulty;

    while (difficulty != 'e' && difficulty != 'n' && difficulty != 'h' && difficulty != 'E' && difficulty != 'N' && difficulty != 'H'){
    printf("Please select your difficulty\n[E]asy, [N]ormal, [H]ard.\n");
    scanf(" %c", &difficulty);
    getchar();

        switch(difficulty){

            case 'e': case 'E':
            printf("\nEasy selected\n");
            currency = 30;
            break;

            case 'n': case 'N':
            printf("\nNormal selected\n");
            currency = 20;
            break;

            case 'h': case 'H':
            printf("\nHard selected\n");
            currency = 10;
            break;

            default:
            printf("\nInvalid selection\n");
        }
    }
    printf("\nCurrency is %d\n\n", currency);
    return;
}
void fact(){


    while (faction != 'h' && faction != 'e' && faction != 'o' && faction != 'H' && faction != 'E' && faction != 'O'){
    printf("Please select your Faction\n\n[H]umans, [O]rcs, [E]lves\n");
    scanf(" %c", &faction);
    getchar();

        switch(faction){

            case 'h': case 'H':
            printf("\nHuman faction selected.");
            break;

            case 'e': case 'E':
            printf("\nElf faction selected.");
            break;

            case 'o': case 'O':
            printf("\nOrc faction selected.");
            break;

            default:
            printf("\nInvalid selection");
        }
    }
    return;
}
