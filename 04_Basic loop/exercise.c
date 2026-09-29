#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Calculating the Sum of Multiples) Write a program to calculate and print the sum of all multiples of 7 from 1 to 100;
    int sum = 0;
    for(int i = 1; i <= 100; i++) {
        if(i % 7 == 0) {
            sum = sum + i;
            printf("%d ", i);
        }
    }

    printf("\nSum of multiples of 7 from 1 to 100 is: %d\n", sum);
    return 0;
}
