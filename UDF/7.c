#include <stdio.h>

int magicNum(int n) {
    if (n == 1 || n == 7)
        return 1; // It's a magic number
    if (n < 10)
        return 0; // Not a magic number
    
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return magicNum(sum); // Check recursively
}

int main() {
    int num;
    printf("Enter a number to check if it's magic or not: ");
    scanf("%d", &num);
    
    if (magicNum(num))
        printf("%d is a magic number.\n", num);
    else
        printf("%d is not a magic number.\n", num);
    
    return 0;
}
