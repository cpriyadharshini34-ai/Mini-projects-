#include<stdio.h>

int main()
{
    float loan, rate, years, interest, total;

    printf("Enter Loan Amount: ");
    scanf("%f", &loan);

    printf("Enter Interest Rate: ");
    scanf("%f", &rate);

    printf("Enter Number of Years: ");
    scanf("%f", &years);

    interest = (loan * rate * years) / 100;
    total = loan + interest;

    printf("Total Amount to Pay = %.2f", total);

    return 0;
}