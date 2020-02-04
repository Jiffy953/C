#include<stdio.h>
float n1;
float n2;
int main(void)
{
    printf("Enter the first number please\n");
    scanf("%f", &n1);
    printf("Enter the second number please\n");
    scanf("%f", &n2);
    float sum;
    sum = n1 + n2;
    printf("The total of the two number is %f", sum);
}
