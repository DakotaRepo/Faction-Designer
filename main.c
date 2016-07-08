#include <stdio.h>
#include <stdlib.h>

int main()
{
    char difficulty;
    int currency = 0;

    while (difficulty != 'e' && difficulty != 'n' && difficulty != 'h' && difficulty != 'E' && difficulty != 'N' && difficulty != 'H'){
    printf("Please select your difficulty\n");
    scanf(" %c", &difficulty);
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
    printf("\nCurrency is %d", currency);
    return 0;
}
