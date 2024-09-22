#include <stdio.h>

int main(){
    int x;

    printf("Enter an integer value for x: ");
    scanf("%d", &x);
    
    if (x % 6 == 0){
        printf("Excellent\n");
    } else if (x % 2 == 0 || x % 3 == 0) {
        printf("OK\n");  
    } else {
        printf("Noo\n");  
    }
    return 0;
}