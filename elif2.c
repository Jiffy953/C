#include<stdio.h>
int main(void)
{
    int grade;
    printf("Enter a grade ");
    scanf("%d", &grade);
    if(grade <= 0 || grade >= 100)
    {
        puts("Must value between 100 and 0");
    }
    else if(grade >= 90)
    {
        puts("A");
    }
    else if(grade >= 80)
    {
        puts("B");
    }
    else if(grade >= 70)
    {
        puts("C");
    }
    else if(grade >= 60)
    {
        puts("D");
    }
    else
    {
        puts("F");
    }
}
