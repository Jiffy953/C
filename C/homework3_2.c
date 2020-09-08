#include<stdio.h>
int main(){
    printf("0x%x\n", 100);
    printf("%o", 100);
    int hour, min, sec;
    printf("\nEnter the time in the form hh:mm:ss: ");
    scanf("%d:%d:%d", &hour, &min, &sec);
        if (hour > 24 || min > 60 || sec > 60){
            printf("Please renter in valid format");
        }
        else{
             printf("The hour is: %d\nThe minute is: %d\nThe second is: %d",hour, min, sec);
        }
   
}