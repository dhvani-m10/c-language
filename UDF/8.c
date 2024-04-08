#include <stdio.h>

void printNumbers() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("Divisible by both 3 and 5\n");
        } else {
            printf("%d\n", i);
        }
    }
}

void main() {
    printNumbers();
    
}