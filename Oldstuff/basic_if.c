#include<stdio.h>
int main(void)
{
    printf("\nEnter two values and I will tell you their relation\n");
    int n1;
    int n2;
    scanf("%d" "%d",&n1, &n2);
    if(n1 == n2)
    {
        printf("\nThe values are equal");
    }
    if(n1 > n2)
    {
        printf("\n%d is greater than %d", n1, n2);
    }
    if(n1 < n2)
    {
        printf("\n%d is less than %d", n1, n2);
    }
}
