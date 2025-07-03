#include <stdio.h>

int main() {
    int array[10];  // Static array of size 10

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);  // User input
    }

    printf("You entered:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);  // Print values
    }

    return 0;
}
