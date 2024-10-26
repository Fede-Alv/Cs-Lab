#include <stdio.h>

int main() {
    char text[1000];
    int i = 0; //for the length

    printf("Enter here: ");
    fgets(text, sizeof(text), stdin);

    while (text[i] != '\0') {
        i++;
    }

    if (text[i - 1] == '\n') {
        i--;
    }

    printf("The length of the input is: %d\n", i);

    return 0;
}