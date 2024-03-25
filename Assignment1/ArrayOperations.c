#include <stdio.h>

#define MAX_SIZE 100

// Function prototypes
int findLargest(int array[], int size);
int findSmallest(int array[], int size);
int findSum(int array[], int size);
float findAverage(int array[], int size);

int main() {
    // Open output file
    FILE *outputFile;
    outputFile = fopen("ArrayOperations.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file!\n");
        return 1;
    }

    // Sample array
    int array[] = {5, 3, 9, 1, 7};
    int size = sizeof(array) / sizeof(array[0]);

    // Find and write largest element to file
    fprintf(outputFile, "Largest Element: %d\n", findLargest(array, size));

    // Find and write smallest element to file
    fprintf(outputFile, "Smallest Element: %d\n", findSmallest(array, size));

    // Find and write sum of elements to file
    fprintf(outputFile, "Sum of Elements: %d\n", findSum(array, size));

    // Find and write average of elements to file
    fprintf(outputFile, "Average of Elements: %.2f\n", findAverage(array, size));

    // Close output file
    fclose(outputFile);

    printf("Array operations completed. Check 'ArrayOperations.txt' for the result.\n");

    return 0;
}

// Function to find the largest element in the array
int findLargest(int array[], int size) {
    int largest = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }
    return largest;
}

// Function to find the smallest element in the array
int findSmallest(int array[], int size) {
    int smallest = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }
    return smallest;
}

// Function to find the sum of elements in the array
int findSum(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

// Function to find the average of elements in the array
float findAverage(int array[], int size) {
    int sum = findSum(array, size);
    return (float)sum / size;
}

