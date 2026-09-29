#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mort_amount,mort_term,total_amount_payable,required_monthly_payment,total_interest;
    float interest_rate,monthly_payable_interest;

    printf("Enter mortgage amount in dollars:");
    scanf("%d",&mort_amount);

    printf("Enter mortgage term (in years):");
    scanf("%d",&mort_term);

    printf("Enter interest rate:");
    scanf("%d",&interest_rate);

    interest_rate = interest_rate/100;

    total_interest = mort_amount * interest_rate * mort_term;
    total_amount_payable = total_interest + mort_amount;
    required_monthly_payment = total_amount_payable /(mort_term*12);

    printf("The Monthly Payable Interest is:%.2f",required_monthly_payment);

    return 0;
}
