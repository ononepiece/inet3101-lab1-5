#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <number_of_elements>\n", argv[0]);
        return 1;
    }

    int num_elements = atoi(argv[1]); // Initial size of the array
    int *array = (int *)malloc(num_elements * sizeof(int)); // Allocate memory
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    int count = 0;  // Number of elements currently stored
    int capacity = num_elements; // Capacity of the array
    int input;

    printf("Enter numbers (type -1 to stop):\n");
    
    while (1) {
        scanf("%d", &input);
        if (input == -1) { // Stop if user enters -1
            break;
        }

        if (count >= capacity) {  // If array is full, resize
            capacity *= 2; // Double the capacity
            int *temp = realloc(array, capacity * sizeof(int)); // Reallocate memory
            
            if (temp == NULL) { // Check if reallocation failed
                printf("Memory reallocation failed\n");
                free(array); // Free old memory before exiting
                return 1;
            }
            array = temp; // Assign reallocated memory
        }

        array[count] = input; // Store the input
        count++;

        // Print current numbers in the array
        printf("Numbers in the array:\n");
        for (int i = 0; i < count; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    free(array); // Free allocated memory
    return 0;
}
