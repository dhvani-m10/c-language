#include <stdio.h>

void leapYear(int start, int end, int year) {
    if (year > end) {
        return;
    }
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        printf("%d\t", year);
    }
    leapYear(start, end, year+1);
}

void main() {
    int start, end;
    printf("Enter the start year: ");
    scanf("%d", &start);
    printf("Enter the end year: ");
    scanf("%d", &end);
    leapYear(start, end, start);
    
}