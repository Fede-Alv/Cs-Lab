#include <stdio.h>
#include <string.h>

int main() {
    char token[1000];
    int count = 1;

    printf("Enter the text: ");
    fgets(token, sizeof(token), stdin);

    for (int i = 0; token[i] != '\0'; i++) {
        if (token[i] == '#') {
            token[i] = '_'; 
            count++;
        }
    }

    printf("Modified text: %s\n", token);
    
    return 0;
}
