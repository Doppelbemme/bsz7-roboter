#include <stdio.h>

void main(){
    char wall[2];
    int turns = 0;
    int stepsBeforeFirstTurn = 0;
    int stepsBeforeThirdTurn = 0;
    int MAX_TURNS = 4;

    while(turns < MAX_TURNS) {
        printf("Ist die Wand da?\n");
        scanf("%s", wall);
        while (tolower(wall[0]) != 'n' && tolower(wall[0]) != 'y') {
            printf("Ungültige Eingabe! (y/n)\n");
            scanf("%s", wall);
        }

        if(tolower(wall[0]) == 'y') {
            printf("Drehung.\n");
            turns = turns + 1;
        }else if (tolower(wall[0]) == 'n') {
            printf("Schritt.\n");
            if(turns == 0){
                stepsBeforeFirstTurn = stepsBeforeFirstTurn + 1;
            }else if(turns == 2){
                stepsBeforeThirdTurn = stepsBeforeThirdTurn + 1;
            }
        }
    }

    int i;
    int currentSteps = 0;
    int stepsToStartPoint = stepsBeforeThirdTurn - stepsBeforeFirstTurn;
    while (currentSteps < stepsToStartPoint){
        printf("Schritt.\n");
        currentSteps = currentSteps + 1;
    }

    printf("Ausgangspunkt erreicht.\n");
}