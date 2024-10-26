#include <stdio.h>
#include <string.h>

int main() {
    char text[1000];
    int i = 0, j = 0; //i in j out

    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);

    while (text[i] != '\0') {
        if (text[i] != ' ') {
            text[j++] = text[i];
        } else if (j > 0 && text[j - 1] != ' ') {
            text[j++] = ' ';
        }
        i++;
    }


    text[j] = '\0';

    printf("New text: %s", text);

    return 0;
}
