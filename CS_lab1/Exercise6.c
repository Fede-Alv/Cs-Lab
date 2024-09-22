#include <stdio.h>

int main() {
    int t1, t2, t3, t4;  
    int max_time;        


    printf("Enter the durations of the four tasks (t1, t2, t3, t4): ");
    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);

    max_time = t1;

    if (t2 > max_time) {
        max_time = t2;
    }
    if (t3 > max_time) {
        max_time = t3;
    }
    if (t4 > max_time) {
        max_time = t4;
    }

    printf("The time required to complete all jobs is: %d\n", max_time);

    return 0;
}
