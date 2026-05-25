#include<stdio.h>

int main()
{
    int tamil, english, maths;
    int total;
    float average;

    printf("Enter Tamil mark: ");
    scanf("%d",&tamil);

    printf("Enter English mark: ");
    scanf("%d",&english);

    printf("Enter Maths mark: ");
    scanf("%d",&maths);

    total = tamil + english + maths;
    average = total / 3.0;

    printf("\nTotal = %d", total);
    printf("\nAverage = %.2f", average);

    if(tamil>=35 && english>=35 && maths>=35)
    {
        printf("\nResult = PASS");
    }
    else
    {
        printf("\nResult = FAIL");
    }

    return 0;
}