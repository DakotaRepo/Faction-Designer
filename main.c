#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char faction;
int currency = 0;
char unit;
int infantry = 0;
int heavyInfantry = 0;
int lightCavalry = 0;
int knight = 0;
int skirmisher = 0;
int archer = 0;
int enemyInfantry = 0;
int enemyHeavyInfantry = 0;
int enemyLightCavalry = 0;
int enemyKnight = 0;
int enemySkirmisher = 0;
int enemyArcher = 0;

void diff();
void fact();
void unitSelectionH();
void unitSelectionE();
void unitSelectionO();
void randomEnemySelection();

int main(){

    diff();
    fact();
    if (faction == 'h' || faction == 'H')unitSelectionH();
    if (faction == 'e' || faction == 'E')unitSelectionE();
    if (faction == 'o' || faction == 'O')unitSelectionO();

    srand(time(NULL));
    randomEnemySelection();
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
printf("[P]ikemen(Cost 1, Attack 1, Defense 1)\n[G]uards(Cost 2, Attack 2, Defense 2)\n");
printf("[L]ancers(Cost 1, Attack 1, Defense 1)\n[K]nights(Cost 2, Attack 2, Defense 2)\n");
printf("[S]kirmishers(Cost 1, Attack 1, Defense 1)\n[A]rchers(Cost 2, Attack 2, Defense 2)\n");

    while (currency >= 2){
    printf("\nYou have %d to spend on units", currency);
    scanf(" %c", &unit);
    getchar();

            switch(unit){

            case 'p': case 'P':
            infantry ++;
            currency --;
            break;

            case 'g': case 'G':
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

            case 'p': case 'P':
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
printf("[M]ilitia(Cost 1, Attack 1, Defense 1)\n[G]uardians(Cost 2, Attack 1, Defense 3)\n");
printf("[B]ow Cavalry(Cost 1, Attack 1, Defense 1)\n[N]oble Cavalry(Cost 2, Attack 2, Defense 2)\n");
printf("[W]atchers(Cost 1, Attack 1, Defense 1)\n[L]ongbowmen(Cost 2, Attack 2, Defense 2)\n");

    while (currency >= 2){
    printf("\nYou have %d to spend on units", currency);
    scanf(" %c", &unit);
    getchar();

            switch(unit){

            case 'm': case 'M':
            infantry ++;
            currency --;
            break;

            case 'g': case 'G':
            heavyInfantry ++;
            currency -= 2;
            break;

            case 'b': case 'B':
            lightCavalry ++;
            currency --;
            break;

            case 'n': case 'N':
            knight ++;
            currency -= 2;
            break;

            case 'w': case 'W':
            skirmisher ++;
            currency --;
            break;

            case 'l': case 'L':
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

            case 'm': case 'M':
            infantry ++;
            currency --;
            break;

            case 'b': case 'B':
            lightCavalry ++;
            currency --;
            break;

            case 'w': case 'W':
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
printf("[M]arauders(Cost 1, Attack 2, Defense 1)\n[C]hampions(Cost 2, Attack 2, Defense 2)\n");
printf("[S]torm Riders(Cost 1, Attack 2, Defense 1)\n[B]ear Cavalry(Cost 2, Attack 3, Defense 1)\n");
printf("[R]aiders(Cost 1, Attack 1, Defense 1)\n[W]arlocks(Cost 2, Attack 2, Defense 1)\n");

    while (currency >= 2){
    printf("\nYou have %d to spend on units", currency);
    scanf(" %c", &unit);
    getchar();

            switch(unit){

            case 'm': case 'M':
            infantry ++;
            currency --;
            break;

            case 'c': case 'C':
            heavyInfantry ++;
            currency -= 2;
            break;

            case 's': case 'S':
            lightCavalry ++;
            currency --;
            break;

            case 'b': case 'B':
            knight ++;
            currency -= 2;
            break;

            case 'r': case 'R':
            skirmisher ++;
            currency --;
            break;

            case 'w': case 'W':
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

            case 'm': case 'M':
            infantry ++;
            currency --;
            break;

            case 's': case 'S':
            lightCavalry ++;
            currency --;
            break;

            case 'r': case 'R':
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
void randomEnemySelection(){
    int factionSelection = 7;

while(factionSelection >6){
    factionSelection = (rand()%20) + 1;
    }
        switch(factionSelection){

        case 1:
        printf("\n\nOpposing Force is Human Offensive");
        enemyLightCavalry = 4;
        enemySkirmisher = 2;
        enemyKnight = 2;
        enemyArcher = 2;
        enemyHeavyInfantry = 2;
        enemyInfantry = 6;
        break;

        case 2:
        printf("\n\nOpposing Force is Human Defensive");
        enemyLightCavalry = 2;
        enemySkirmisher = 4;
        enemyKnight = 0;
        enemyArcher = 2;
        enemyHeavyInfantry = 4;
        enemyInfantry = 2;
        break;

        case 3:
        printf("\n\nOpposing Force is Elven Offensive");
        enemyLightCavalry = 4;
        enemySkirmisher = 2;
        enemyKnight = 2;
        enemyArcher = 2;
        enemyHeavyInfantry = 2;
        enemyInfantry = 6;
        break;

        case 4:
        printf("\n\nOpposing Force is Elven Defensive");
        enemyLightCavalry = 2;
        enemySkirmisher = 4;
        enemyKnight = 0;
        enemyArcher = 2;
        enemyHeavyInfantry = 4;
        enemyInfantry = 2;
        break;

        case 5:
        printf("\n\nOpposing Force is Orcish Offensive");
        enemyLightCavalry = 4;
        enemySkirmisher = 2;
        enemyKnight = 2;
        enemyArcher = 2;
        enemyHeavyInfantry = 2;
        enemyInfantry = 6;
        break;

        case 6:
        printf("\n\nOpposing Force is Orcish Defensive");
        enemyLightCavalry = 2;
        enemySkirmisher = 4;
        enemyKnight = 0;
        enemyArcher = 2;
        enemyHeavyInfantry = 4;
        enemyInfantry = 2;
        break;

        default:
        printf("\n\nError selecting opposing force");


    }
    printf("\n\nThe enemy force contains\n\n%d Infantry, %d Heavy Infantry, \n%d Light Cavalry, %d Knights, \n%d Skirmishers, %d Archers.\n",
           enemyInfantry, enemyHeavyInfantry, enemyLightCavalry, enemyKnight, enemySkirmisher, enemyArcher);
return;
}
