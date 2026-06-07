#include<stdio.h>

int main()
{
    float amount, discount, finalAmount;

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    discount = amount * 0.10;
    finalAmount = amount - discount;

    printf("Discount = %.2f\n", discount);
    printf("Final Amount = %.2f", finalAmount);

    return 0;
}