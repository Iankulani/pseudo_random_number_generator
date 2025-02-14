#include <stdio.h>
#include <stdlib.h>

// Function to generate pseudo-random numbers using Linear Congruential Generator (LCG)
void generate_pseudo_random(int seed, int a, int c, int m, int length) {
    int current = seed;
    printf("Generated %d pseudo-random numbers:\n", length);

    for (int i = 0; i < length; ++i) {
        current = (a * current + c) % m;
        printf("%d ", current);
    }
    printf("\n");
}

int main() {
    int seed, a, c, m, length;

    printf("======================== Pseudo-Random Number Generator Tool ======================== \n\n");

    // User input for PRNG parameters
    printf("Enter the seed value: ");
    if (scanf("%d", &seed) != 1) {
        printf("Invalid input! Please enter a valid integer for the seed.\n");
        return 1; // Exit if invalid input
    }

    printf("Enter the multiplier (a):");
    if (scanf("%d", &a) != 1) {
        printf("Invalid input! Please enter a valid integer for the multiplier.\n");
        return 1; // Exit if invalid input
    }

    printf("Enter the increment (c):");
    if (scanf("%d", &c) != 1) {
        printf("Invalid input! Please enter a valid integer for the increment.\n");
        return 1; // Exit if invalid input
    }

    printf("Enter the modulus (m):");
    if (scanf("%d", &m) != 1) {
        printf("Invalid input! Please enter a valid integer for the modulus.\n");
        return 1; // Exit if invalid input
    }

    printf("Enter the number of pseudo-random numbers to generate:");
    if (scanf("%d", &length) != 1 || length <= 0) {
        printf("Invalid input! Please enter a valid positive integer for the number of numbers to generate.\n");
        return 1; // Exit if invalid input
    }

    // Generate pseudo-random numbers
    generate_pseudo_random(seed, a, c, m, length);

    return 0;
}
