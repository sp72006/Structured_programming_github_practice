#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter an odd number from 1 to 19: ");
    scanf("%d", &n);

    while(n < 1 || n > 19 || n % 2 == 0) {
        printf("Invalid! Enter ODD number between 1-19: ");
        scanf("%d", &n);
    }

    int mid = n / 2;

    for(int i = 0; i <= mid; i++) {
        int spaces = mid - i;
        int stars = 2 * i + 1;

        for(int s = 0; s < spaces; s++) printf(" ");
        for(int s = 0; s < stars; s++) printf("*");
        printf("\n");
    }

    for(int i = mid - 1; i >= 0; i--) {
        int spaces = mid - i;
        int stars = 2 * i + 1;

        for(int s = 0; s < spaces; s++) printf(" ");
        for(int s = 0; s < stars; s++) printf("*");
        printf("\n");
    }
    return 0;
}
