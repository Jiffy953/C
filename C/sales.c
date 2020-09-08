#include<stdio.h>

int main(void)
{
    float gross;
    float total;
    while(gross != -1)
    {
    printf("Enter sales in dollars(-1 to end): ");
    scanf("%f",&gross);
    total = 200 + gross * .09;
    printf("Salary is: $%.2f\n", total);
    }

}
