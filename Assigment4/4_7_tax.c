#include<stdio.h>
int main(){
    float income, age, tax, senior = 0.03, amount;
    printf("Input annual income in dollars and then age: ");
    scanf("%f%f", &income, &age);
    if (age >= 60){ //senior
        if(income > 100000){
            amount = (.09 - senior);
            tax = income * amount;
            printf("The tax amount is: $%.2f\nThe tax rate is: %.2f\nThe senior discount rate is: %.2f\n", tax, amount, senior);
        }
        else if (income <= 100000 && income > 50000 ){
           amount = (.07 - senior);
            tax = income * amount;
            printf("The tax amount is: $%.2f\nThe tax rate is: %.2f\nThe senior discount rate is: %.2f\n", tax, amount, senior);
        }
        else{
            tax = 0;
            printf("The tax amount is: $%.2f\nThe tax rate is: 0\nThe senior discount rate is: %.2f\n", tax, senior);
        }
    }
    else //nonsenior
        if(income > 100000){
            tax = income * .09;
            printf("The tax amount is: $%.2f\nThe tax rate is: %.2f\nThere is no senior discount", tax, amount);
        }
        else if (income <= 100000 && income > 50000 ){
            tax = income * .07;
            printf("The tax amount is: $%.2f\nThe tax rate is: %.2f\nThere is no senior discount", tax, amount);
        }
        else{
            tax = 0;
            printf("The tax amount is: $%.2f\nThe tax rate is: %.2f\nThere is no senior discount", tax, amount);
        }
}
