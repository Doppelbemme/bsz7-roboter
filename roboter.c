#include <stdio.h>
#include <ctype.h>

void main(){
    char wall[2];
    int turns;
    int MAX_TURNS;
    int stepsBeforeFirstTurn;
    int stepsBeforeThirdTurn;
    int currentSteps;
    int stepsToStartPoint;

    turns = 0;
    MAX_TURNS = 4;
    stepsBeforeFirstTurn = 0;
    stepsBeforeThirdTurn = 0;
    currentSteps = 0;
    stepsToStartPoint = 0;

    while(turns < MAX_TURNS) {
        printf("Ist die Wand da?\n");
        scanf("%s", wall);

        switch (tolower(wall[0])) {
            case 'y':
                printf("Drehung.\n");
                turns = turns + 1;
                break;
            case 'n':
                printf("Schritt.\n");
                if(turns == 0){
                    stepsBeforeFirstTurn = stepsBeforeFirstTurn + 1;
                }else if(turns == 2){
                    stepsBeforeThirdTurn = stepsBeforeThirdTurn + 1;
                }
                break;
            default:
                printf("Ungültige Eingabe! (y/n)\n");
                break;
        }
    }

    stepsToStartPoint = stepsBeforeThirdTurn - stepsBeforeFirstTurn;

    while (currentSteps < stepsToStartPoint){
        printf("Schritt.\n");
        currentSteps = currentSteps + 1;
    }

    if(stepsToStartPoint > 0){
        printf("(%d Schritte)\n", stepsToStartPoint);
    }
    printf("Ausgangspunkt erreicht.\n");
}
