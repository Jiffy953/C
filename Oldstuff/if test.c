#include<stdio.h>

int main(void)
{
    int number;
    printf("Enter a value ");
    scanf("%d", &number);
    if(number >= 0)
    {
        printf("The value is positive");
    }
    else{
        printf("The value is negitive");
    }
}
