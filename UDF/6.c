#include <stdio.h>

// Function to find the largest number in the array
int Largest(int arr[], int size) {
    int largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element a[%d] : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int largest = Largest(arr, size);
    printf("The largest number in the array is: %d\n", largest);

    return 0;
}
