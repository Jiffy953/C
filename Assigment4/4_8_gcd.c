#include<stdio.h>
int main(){
    int n1, n2, temp1, temp2;
    printf("Enter two postive integers: ");
    scanf("%d%d", &n1, &n2);
    temp1 = n1;
    temp2 = n2;
    while (n1 != n2){
        if (n1 > n2 )
          n1 -= n2;
        else
          n2 -= n1;
  }
  printf("The greatest common factor of %d and %d is: %d", temp1, temp2, n1);
}
