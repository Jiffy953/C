#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter three values: ");
    scanf("%d%d%d", &a, &b, &c);

    float ave = (a + b + c) / 3;

    float dif_a2 = (ave - a) * (ave - a);
    float dif_b2 = (ave - b) * (ave - b); 
    float dif_c2 = (ave - c) * (ave - c);
    float var = (dif_a2 + dif_b2 + dif_c2) / 3;

    printf("The average is: %.2f", ave);
    printf("\nThe variance is: %.2f",var);

        if (a <= b && a <= c)
    {
        printf("\nThe minimum is: %d", a);
    }
    else if (b <= a && b <= c)
    {
        printf("\nThe minimum is: %d", b);
    }
    else if (c <= a && c <= b)
    {
        printf("\nThe minimum is: %d", c);
    }

     if (a >= b && a >= c)
    {
        printf("\nThe maximum is: %d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("\nThe maximum is: %d", b);
    }
    else if (c >= a && c >= b)
    {
        printf("\nThe maximim is: %d", c);
    }
}
