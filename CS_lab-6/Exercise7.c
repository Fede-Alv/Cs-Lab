#include <stdio.h>
#include <string.h>

int main() {
    int n;
    

    printf("Enter the number of names (n): ");
    scanf("%d", &n);

    char names[n][51];
    char target[51];   

    
    printf("Enter the names:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }


    printf("Enter the target name: ");
    scanf("%s", target);

    // Search for the target name
    int found_index = -1;
    for (int i = 0; i < n; i++) {
        if (strcmp(names[i], target) == 0) {
            found_index = i;
            break; 
        }
    }

    
    printf("%d\n", found_index);

    return 0;
}
