#include <stdio.h>

int main() {
    int x, y;

    while (scanf("%d %d", &x, &y) != EOF) {
        int f0 = 0, f1 = 1;
        int fn = f0 + f1;
        int found = 0;

        if (f0 >= x && f0 <= y) {
            printf("%d ", f0);
            found = 1;
        }
        if (f1 >= x && f1 <= y) {
            printf("%d ", f1);
            found = 1;
        }

        while (fn <= y) {
            if (fn >= x) {
                printf("%d ", fn);
                found = 1;
            }
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }

        if (!found) {
            printf("DO NOT EXIST");
        }

        printf("\n");
    }

    return 0;
}
