#include <stdio.h>

int main(){
    int x;
    int y;

    printf("Enter an integer value for x: ");
    scanf("%d", &x);

    if (x > 0) {
        y = (x * x) - (2 * x) + 3;  
    } else if (x == 0) {
        y = x - 5;  
    } else {
        y = (x * x) + (2 * x) - 3;  
    }

    printf("The value of y is: %d\n", y);
    
    return 0;
}