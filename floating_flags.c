


#include<stdio.h>
int main(void)
{
    printf("%f\n", 1234567.89); //six to the right of the point
    printf("%f\n", 1234567.0); //six to the right
    printf("%f\n", 1234567); //six to the right
    printf("%e\n", 1234567.89);
    printf("%e\n", +1234567.89); //doesnt print plus
    printf("%+e\n", +1234567.89); //prints plus in flag
    printf("%E\n", 1234567.89);
    printf("%g\n", 1234567.89); //lowercase g
    printf("%G\n", 1234567.89); //uppercase G
    printf("%g\n", 0.1234567);
    printf("%g\n", 1.23);
    printf("%g\n", 12.30); //will not print 0
}
