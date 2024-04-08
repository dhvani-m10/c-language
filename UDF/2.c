#include <stdio.h>

// Function to convert decimal to binary
void binary(int num) {
    int binary[32];
    int i = 0;
    while (num> 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }
    printf("Binary number: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

void main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    binary(num);
    
}