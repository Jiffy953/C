#include<stdio.h>
int main()
{
    int counter = 0;
    int grade = 0;
    int total = 0;
    float average;
    //int stud;
    printf("Enter the grade of the first student \n");
    scanf("%d", &grade);

    while(grade != -1)
    {
        total = total + grade;
        counter = counter + 1;
        printf("enter grade of all students\n");
        printf("When you finish enter -1 -->");
        scanf("%d", &grade);
    }
    average = (float) total / counter;
    printf("Class average is %.3f\n", average);
}
