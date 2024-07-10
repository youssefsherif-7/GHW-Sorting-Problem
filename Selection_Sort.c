#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10

int main() {
    int array_of_numbers[ARRAY_SIZE];
    int temp = 0; 
    int i, j, min_index;

    // Seed the random number generator
    srand(time(NULL));

    // Generate and print 10 random numbers
    for (i = 0; i < ARRAY_SIZE; i++) {
        array_of_numbers[i] = rand() % 100; // Generate random numbers between 0 and 99
        printf("%d\n", array_of_numbers[i]);
    }
    
    printf("----------------\n");
    
    // Selection Sort Algorithm
    for (i = 0; i < ARRAY_SIZE - 1; i++) {
        min_index = i;
        for (j = i + 1; j < ARRAY_SIZE; j++) {
            if (array_of_numbers[j] < array_of_numbers[min_index]) {
                min_index = j;
            }
        }
        // Swap elements
        temp = array_of_numbers[i];
        array_of_numbers[i] = array_of_numbers[min_index];
        array_of_numbers[min_index] = temp;
    }
    
    // Print sorted array
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%d\n", array_of_numbers[i]);
    }

    return 0;
}
