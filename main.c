#include <stdio.h>
#include <stdlib.h>

char faction;
int currency = 0;
char unit;
int infantry = 0;
int heavyInfantry = 0;
int lightCavalry = 0;
int knight = 0;
int skirmisher = 0;
int archer = 0;

void diff();
void fact();
void unitSelectionH();
void unitSelectionE();
void unitSelectionO();

int main(){

    diff();
    fact();
    if (faction == 'h' || faction == 'H')unitSelectionH();
    if (faction == 'e' || faction == 'E')unitSelectionE();
    if (faction == 'o' || faction == 'O')unitSelectionO();
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
    return;
}
void fact(){


    while (faction != 'h' && faction != 'e' && faction != 'o' && faction != 'H' && faction != 'E' && faction != 'O'){
    printf("Please select your Faction\n\n[H]umans, [E]lves, [O]rcs\n");
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
void unitSelectionH(){



printf("\nPlease select your Human units\n\n");
printf("[I]nfantry\t\t(Cost 1, Attack 1, Defense 1)\n[H]eavy Infantry\t(Cost 2, Attack 2, Defense 2)\n");
printf("[L]ight Cavalry\t\t(Cost 1, Attack 1, Defense 1)\n[K]nights\t\t(Cost 2, Attack 2, Defense 2)\n");
printf("[S]kirmishers\t\t(Cost 1, Attack 1, Defense 1)\n[A]rchers\t\t(Cost 2, Attack 2, Defense 2)\n");

    while (currency >= 2){
    printf("\nYou have %d to spend on units", currency);
    scanf(" %c", &unit);
    getchar();

            switch(unit){

            case 'i': case 'I':
            infantry ++;
            currency --;
            break;

            case 'h': case 'H':
            heavyInfantry ++;
            currency -= 2;
            break;

            case 'l': case 'L':
            lightCavalry ++;
            currency --;
            break;

            case 'k': case 'K':
            knight ++;
            currency -= 2;
            break;

            case 's': case 'S':
            skirmisher ++;
            currency --;
            break;

            case 'a': case 'A':
            archer ++;
            currency -= 2;
            break;

            default:
            printf("\nInvalid selection");
            }
    }
        while (currency == 1){
        printf("\nYou have %d to spend on units", currency);
        scanf(" %c", &unit);
        getchar();


            switch(unit){

            case 'i': case 'I':
            infantry ++;
            currency --;
            break;

            case 'l': case 'L':
            lightCavalry ++;
            currency --;
            break;

            case 's': case 'S':
            skirmisher ++;
            currency --;
            break;

            default:
            printf("\nInvalid selection");
            }
    }
    printf("\nYour unit roster is\n\n%d Infantry, %d Heavy Infantry, \n%d Light Cavalry, %d Knights, \n%d Skirmishers, %d Archers.\n", infantry, heavyInfantry, lightCavalry, knight, skirmisher, archer);
    return;
}
void unitSelectionE(){


printf("\nPlease select your Elf units\n\n");
printf("[I]nfantry\t\t(Cost 1, Attack 1, Defense 1)\n[H]eavy Infantry\t(Cost 2, Attack 2, Defense 2)\n");
printf("[L]ight Cavalry\t\t(Cost 1, Attack 1, Defense 1)\n[K]nights\t\t(Cost 2, Attack 2, Defense 2)\n");
printf("[S]kirmishers\t\t(Cost 1, Attack 1, Defense 1)\n[A]rchers\t\t(Cost 2, Attack 2, Defense 2)\n");

    while (currency >= 2){
    printf("\nYou have %d to spend on units", currency);
    scanf(" %c", &unit);
    getchar();

            switch(unit){

            case 'i': case 'I':
            infantry ++;
            currency --;
            break;

            case 'h': case 'H':
            heavyInfantry ++;
            currency -= 2;
            break;

            case 'l': case 'L':
            lightCavalry ++;
            currency --;
            break;

            case 'k': case 'K':
            knight ++;
            currency -= 2;
            break;

            case 's': case 'S':
            skirmisher ++;
            currency --;
            break;

            case 'a': case 'A':
            archer ++;
            currency -= 2;
            break;

            default:
            printf("\nInvalid selection");
            }
    }
        while (currency == 1){
        printf("\nYou have %d to spend on units", currency);
        scanf(" %c", &unit);
        getchar();


            switch(unit){

            case 'i': case 'I':
            infantry ++;
            currency --;
            break;

            case 'l': case 'L':
            lightCavalry ++;
            currency --;
            break;

            case 's': case 'S':
            skirmisher ++;
            currency --;
            break;

            default:
            printf("\nInvalid selection");
            }
    }
    printf("\nYour unit roster is\n\n%d Infantry, %d Heavy Infantry, \n%d Light Cavalry, %d Knights, \n%d Skirmishers, %d Archers.\n", infantry, heavyInfantry, lightCavalry, knight, skirmisher, archer);
    return;
}
void unitSelectionO(){


printf("\nPlease select your Orc units\n\n");
printf("[I]nfantry\t\t(Cost 1, Attack 1, Defense 1)\n[H]eavy Infantry\t(Cost 2, Attack 2, Defense 2)\n");
printf("[L]ight Cavalry\t\t(Cost 1, Attack 1, Defense 1)\n[K]nights\t\t(Cost 2, Attack 2, Defense 2)\n");
printf("[S]kirmishers\t\t(Cost 1, Attack 1, Defense 1)\n[A]rchers\t\t(Cost 2, Attack 2, Defense 2)\n");

    while (currency >= 2){
    printf("\nYou have %d to spend on units", currency);
    scanf(" %c", &unit);
    getchar();

            switch(unit){

            case 'i': case 'I':
            infantry ++;
            currency --;
            break;

            case 'h': case 'H':
            heavyInfantry ++;
            currency -= 2;
            break;

            case 'l': case 'L':
            lightCavalry ++;
            currency --;
            break;

            case 'k': case 'K':
            knight ++;
            currency -= 2;
            break;

            case 's': case 'S':
            skirmisher ++;
            currency --;
            break;

            case 'a': case 'A':
            archer ++;
            currency -= 2;
            break;

            default:
            printf("\nInvalid selection");
            }
    }
        while (currency == 1){
        printf("\nYou have %d to spend on units", currency);
        scanf(" %c", &unit);
        getchar();


            switch(unit){

            case 'i': case 'I':
            infantry ++;
            currency --;
            break;

            case 'l': case 'L':
            lightCavalry ++;
            currency --;
            break;

            case 's': case 'S':
            skirmisher ++;
            currency --;
            break;

            default:
            printf("\nInvalid selection");
            }
    }
    printf("\nYour unit roster is\n\n%d Infantry, %d Heavy Infantry, \n%d Light Cavalry, %d Knights, \n%d Skirmishers, %d Archers.\n", infantry, heavyInfantry, lightCavalry, knight, skirmisher, archer);
    return;
}
