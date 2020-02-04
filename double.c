#include<stdio.h>


int main(void)
{
    double a;
    double b;
    double c;

    puts("Enter three floating point numbers:");
    scanf("%le%lf%lg", &a, &b, &c);

    printf("\nHere are the numbers you entered in plain text\n");
    puts("floating-point notation: ");
    printf("%f\n%f\n%f\n",a, b, c);
}
