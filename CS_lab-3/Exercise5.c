#include <stdio.h>

int main() {
    int runner1Coord, runner1Step, runner2Coord, runner2Step;
    
    printf("Enter runner1's coordinate and step: ");
    scanf("%d %d", &runner1Coord, &runner1Step);
    printf("Enter runner2's coordinate and step: ");
    scanf("%d %d", &runner2Coord, &runner2Step);

    if ((runner1Coord < runner2Coord && runner1Step <= runner2Step) ||
        (runner1Coord > runner2Coord && runner1Step >= runner2Step)) {
        printf("NEVER\n");
    }
    else {

        int relativeSpeed = runner1Step - runner2Step;
        int distance = runner2Coord - runner1Coord;
        if (relativeSpeed == 0) {
            printf("NEVER\n");
        }
        else if (distance % relativeSpeed == 0) {
            int time = distance / relativeSpeed;
            if (time < 0) {
                printf("NEVER\n");
            } else {
                int meetPoint = runner1Coord + runner1Step * time;
                printf("They meet at coordinate %d at time %d\n", meetPoint, time);
            }
        }
        else {
            printf("NEVER\n");
        }
    }

    return 0;
}
