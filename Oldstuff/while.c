#include<stdio.h>
int main()
{
    int counter = 1;
    int grade;
    int total = 0;
    float average;
    int stud;
    printf("How many student's grades average do you want to calculate \n");
    scanf("%d", &stud);

    while(counter <= stud)
    {
        printf("Enter a grade\n");
        scanf("%d", &grade);
        total = total + grade;
        counter = counter + 1;
    }
    average = (float) total / stud;
    printf("Class average is %.3f\n", average);
}
