#include <stdio.h>

void sortAscending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void sortDescending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // int a;
    // printf("Enter the size of an array : ");
    // scanf("%d",&a);

   int n, i;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

 int arr[n];
    for (i = 0; i < n; i++) {
        printf("Enter elements[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Original array: ");
    printArray(arr, n);
    
    sortAscending(arr, n);
    printf("Array in ascending order: ");
    printArray(arr, n);
    
    sortDescending(arr, n);
    printf("Array in descending order: ");
    printArray(arr, n);
    
    return 0;
}
