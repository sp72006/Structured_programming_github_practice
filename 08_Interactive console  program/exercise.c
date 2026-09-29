#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int broke_out = 0;

    for(x = 1; x <= 10 && broke_out == 0; x++) {
        if(x == 5) {
            broke_out = 1;
        }
        else {
            printf("%d ", x);
        }
    }

    if(broke_out == 1) {
        printf("\nBroke out at x == %d\n", x);
    }

    return 0;
}
