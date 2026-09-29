#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a program that prints the sum, the sum
//of the squares, and the sum of the cubes of all natural numbers from 1 till any number
//entered by the user.
    int n;
    long sum = 0, sum_squares = 0, sum_cubes = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum = sum + i;
        sum_squares = sum_squares + (i * i);
        sum_cubes = sum_cubes + (i * i * i);
    }

    printf("\nFrom 1 to %d:\n", n);
    printf("Sum = %ld\n", sum);
    printf("Sum of squares = %ld\n", sum_squares);
    printf("Sum of cubes = %ld\n", sum_cubes);

    return 0;
}
