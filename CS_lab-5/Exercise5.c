#include <stdio.h>
#include <string.h>

int main() {
    char text[1000]; 
    int length, i;
    int isPalindrome = 1;

    printf("Enter the string: ");
    fgets(text, sizeof(text), stdin);
    length = strlen(text);
    if (text[length - 1] == '\n') {
        text[length - 1] = '\0';
        length--;
    }

    for (i = 0; i < length / 2; i++) {
        if (text[i] != text[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
