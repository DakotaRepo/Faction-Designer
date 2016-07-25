#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int currency = 0;
int humanInfantry = 0;
int humanHeavyInfantry = 0;
int humanLightCavalry = 0;
int humanKnight = 0;
int humanSkirmisher = 0;
int humanArcher = 0;
int elfInfantry = 0;
int elfHeavyInfantry = 0;
int elfLightCavalry = 0;
int elfKnight = 0;
int elfSkirmisher = 0;
int elfArcher = 0;
int orcInfantry = 0;
int orcHeavyInfantry = 0;
int orcLightCavalry = 0;
int orcKnight = 0;
int orcSkirmisher = 0;
int orcArcher = 0;
int enemyInfantry = 0;
int enemyHeavyInfantry = 0;
int enemyLightCavalry = 0;
int enemyKnight = 0;
int enemySkirmisher = 0;
int enemyArcher = 0;
char unit;
char quit;
char faction;

void diff();
void fact();
void unitSelectionH();
void unitSelectionE();
void unitSelectionO();
void unitTotal();
void randomEnemySelection();

int main(){
    //Asks the user to select a difficulty.
    diff();
    //Continues the faction selection until the user runs out of currency or chooses to stop designing their faction.
    do {

    fact();

    }while ((currency >= 1) && (quit != 'q'));
    //Informs the user of the units they selected.
    unitTotal();
    //Randomly selects one of six preset opponents
    srand(time(NULL));
    randomEnemySelection();
    return 0;
    }


void diff(){
    char difficulty;

    //Loops until user selects a correct difficulty. Difficulty determines how many units the user can purchase.
    do {
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
    }while (difficulty != 'e' && difficulty != 'n' && difficulty != 'h' && difficulty != 'E' && difficulty != 'N' && difficulty != 'H');
    return;
}
void fact(){

    //Loops until user selects a correct faction. User may also choose to not spend their remaining currency and quit, thereby executing the rest of the program.
    do {
    printf("Please select your Faction\n\n[H]umans, [E]lves, [O]rcs\n");
    printf("[Q]to cancel faction selection\n");
    scanf(" %c", &faction);
    getchar();

            switch(faction){

            case 'q': case 'Q':
            quit = 'q';
            break;

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
    }while ((faction != 'h' && faction != 'e' && faction != 'o' && faction != 'H' && faction != 'E' && faction != 'O') && (quit != 'q'));
    if (faction == 'h' || faction == 'H')unitSelectionH();
    if (faction == 'e' || faction == 'E')unitSelectionE();
    if (faction == 'o' || faction == 'O')unitSelectionO();
    return;
}
void unitSelectionH(){

printf("\nPlease select your Human units\n\n");
printf("[P]ikemen(Cost 1, Attack 1, Defense 1)\n[G]uards(Cost 2, Attack 2, Defense 2)\n");
printf("[L]ancers(Cost 1, Attack 1, Defense 1)\n[K]nights(Cost 2, Attack 2, Defense 2)\n");
printf("[S]kirmishers(Cost 1, Attack 1, Defense 1)\n[A]rchers(Cost 2, Attack 2, Defense 2)\n");
printf("[Q]to return to faction selection screen\n");

//Loops until user has 1 or less currency or chooses to return to faction selection.
    do {
    printf("\nYou have %d to spend on units ", currency);
    scanf(" %c", &unit);
    getchar();

            switch(unit){

            case 'q': case 'Q':
            quit = 'q';
            break;

            case 'p': case 'P':
            humanInfantry ++;
            currency --;
            break;

            case 'g': case 'G':
            humanHeavyInfantry ++;
            currency -= 2;
            break;

            case 'l': case 'L':
            humanLightCavalry ++;
            currency --;
            break;

            case 'k': case 'K':
            humanKnight ++;
            currency -= 2;
            break;

            case 's': case 'S':
            humanSkirmisher ++;
            currency --;
            break;

            case 'a': case 'A':
            humanArcher ++;
            currency -= 2;
            break;

            default:
            printf("\nInvalid selection");
            }

    }while ((currency >= 2) && (quit != 'q'));

        //Allows the user to spend their final currency point or return to faction selection.
        while ((currency == 1) && (quit != 'q')){
        printf("\nYou have %d to spend on units ", currency);
        scanf(" %c", &unit);
        getchar();


            switch(unit){

            case 'q': case 'Q':
            quit = 'q';
            break;

            case 'p': case 'P':
            humanInfantry ++;
            currency --;
            break;

            case 'l': case 'L':
            humanLightCavalry ++;
            currency --;
            break;

            case 's': case 'S':
            humanSkirmisher ++;
            currency --;
            break;

            default:
            printf("\nInvalid selection");
            }
    }
    quit = 'n';
    return;
}
void unitSelectionE(){


printf("\nPlease select your Elf units\n\n");
printf("[M]ilitia(Cost 1, Attack 1, Defense 1)\n[G]uardians(Cost 2, Attack 1, Defense 3)\n");
printf("[B]ow Cavalry(Cost 1, Attack 1, Defense 1)\n[N]oble Cavalry(Cost 2, Attack 2, Defense 2)\n");
printf("[W]atchers(Cost 1, Attack 1, Defense 1)\n[L]ongbowmen(Cost 2, Attack 2, Defense 2)\n");
printf("[Q]to return to faction selection screen\n");

//Loops until user has 1 or less currency or chooses to return to faction selection.
    do {
    printf("\nYou have %d to spend on units ", currency);
    scanf(" %c", &unit);
    getchar();

            switch(unit){

            case 'q': case 'Q':
            quit = 'q';
            break;

            case 'm': case 'M':
            elfInfantry ++;
            currency --;
            break;

            case 'g': case 'G':
            elfHeavyInfantry ++;
            currency -= 2;
            break;

            case 'b': case 'B':
            elfLightCavalry ++;
            currency --;
            break;

            case 'n': case 'N':
            elfKnight ++;
            currency -= 2;
            break;

            case 'w': case 'W':
            elfSkirmisher ++;
            currency --;
            break;

            case 'l': case 'L':
            elfArcher ++;
            currency -= 2;
            break;

            default:
            printf("\nInvalid selection");
            }
    }while ((currency >= 2) && (quit != 'q'));

        //Allows the user to spend their final currency point or return to faction selection.
        while ((currency == 1) && (quit != 'q')){
        printf("\nYou have %d to spend on units ", currency);
        scanf(" %c", &unit);
        getchar();


            switch(unit){

            case 'q': case 'Q':
            quit = 'q';
            break;

            case 'm': case 'M':
            elfInfantry ++;
            currency --;
            break;

            case 'b': case 'B':
            elfLightCavalry ++;
            currency --;
            break;

            case 'w': case 'W':
            elfSkirmisher ++;
            currency --;
            break;

            default:
            printf("\nInvalid selection");
            }
    }
    quit = 'n';
    return;
}
void unitSelectionO(){


printf("\nPlease select your Orc units\n\n");
printf("[M]arauders(Cost 1, Attack 2, Defense 1)\n[C]hampions(Cost 2, Attack 2, Defense 2)\n");
printf("[S]torm Riders(Cost 1, Attack 2, Defense 1)\n[B]ear Cavalry(Cost 2, Attack 3, Defense 1)\n");
printf("[R]aiders(Cost 1, Attack 1, Defense 1)\n[W]arlocks(Cost 2, Attack 2, Defense 1)\n");
printf("[Q]to return to faction selection screen\n");

//Loops until user has 1 or less currency or chooses to return to faction selection.
    do {
    printf("\nYou have %d to spend on units ", currency);
    scanf(" %c", &unit);
    getchar();

            switch(unit){

            case 'q': case 'Q':
            quit = 'q';
            break;

            case 'm': case 'M':
            orcInfantry ++;
            currency --;
            break;

            case 'c': case 'C':
            orcHeavyInfantry ++;
            currency -= 2;
            break;

            case 's': case 'S':
            orcLightCavalry ++;
            currency --;
            break;

            case 'b': case 'B':
            orcKnight ++;
            currency -= 2;
            break;

            case 'r': case 'R':
            orcSkirmisher ++;
            currency --;
            break;

            case 'w': case 'W':
            orcArcher ++;
            currency -= 2;
            break;

            default:
            printf("\nInvalid selection");
            }
    }while ((currency >= 2) && (quit != 'q'));

        //Allows the user to spend their final currency point or return to faction selection.
        while ((currency == 1) && (quit != 'q')){
        printf("\nYou have %d to spend on units ", currency);
        scanf(" %c", &unit);
        getchar();


            switch(unit){

            case 'q': case 'Q':
            quit = 'q';
            break;

            case 'm': case 'M':
            orcInfantry ++;
            currency --;
            break;

            case 's': case 'S':
            orcLightCavalry ++;
            currency --;
            break;

            case 'r': case 'R':
            orcSkirmisher ++;
            currency --;
            break;

            default:
            printf("\nInvalid selection");
            }
    }
    quit = 'n';
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
    printf("\n\nThe enemy force contains\n\n%d Infantry, \n%d Cavalry, \n%d Archers.\n",
           enemyInfantry + enemyHeavyInfantry, enemyLightCavalry + enemyKnight, enemySkirmisher + enemyArcher);
return;
}
void unitTotal(){
printf("\nYour force consists of\n");
if (humanInfantry >0) printf("\n%d Pikemen", humanInfantry);
if (humanHeavyInfantry >0) printf("\n%d Guards", humanHeavyInfantry);
if (humanLightCavalry >0) printf("\n%d Lancers", humanLightCavalry);
if (humanKnight >0) printf("\n%d Knights", humanKnight);
if (humanSkirmisher >0) printf("\n%d Skirmishers", humanSkirmisher);
if (humanArcher >0) printf("\n%d Archers", humanArcher);

if (elfInfantry >0) printf("\n%d Militia", elfInfantry);
if (elfHeavyInfantry >0) printf("\n%d Guardians", elfHeavyInfantry);
if (elfLightCavalry >0) printf("\n%d Bow Cavalry", elfLightCavalry);
if (elfKnight >0) printf("\n%d Noble Cavalry", elfKnight);
if (elfSkirmisher >0) printf("\n%d Watchers", elfSkirmisher);
if (elfArcher >0) printf("\n%d Longbowmen", elfArcher);

if (orcInfantry >0) printf("\n%d Marauders", orcInfantry);
if (orcHeavyInfantry >0) printf("\n%d Champions", orcHeavyInfantry);
if (orcLightCavalry >0) printf("\n%d Storm Riders", orcLightCavalry);
if (orcKnight >0) printf("\n%d Bear Cavalry", orcKnight);
if (orcSkirmisher >0) printf("\n%d Raiders", orcSkirmisher);
if (orcArcher >0) printf("\n%d Warlocks", orcArcher);
return;
}
