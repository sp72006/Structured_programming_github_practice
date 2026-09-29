#include <stdio.h>
#include <stdlib.h>

int main()
{
    int account_number;
    float old_limit, current_balance, new_limit;

    for(int i = 1; i <= 3; i++) {
        printf("\n--- Customer %d ---\n", i);
        printf("Enter account number: ");
        scanf("%d", &account_number);

        printf("Enter credit limit BEFORE recession: ");
        scanf("%f", &old_limit);

        printf("Enter current balance: ");
        scanf("%f", &current_balance);

        new_limit = old_limit / 2.0;

        printf("\nAccount: %d\n", account_number);
        printf("New credit limit: $%.2f\n", new_limit);

        if(current_balance > new_limit) {
            printf("Status: CREDIT LIMIT EXCEEDED! Balance is $%.2f over limit.\n", current_balance - new_limit);
        } else {
            printf("Status: Credit OK. Available credit: $%.2f\n", new_limit - current_balance);
        }
    }
    return 0;
}

