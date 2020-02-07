#include<stdio.h>
int main(){
    int n1, n2, d = 2;
    printf("Enter two postive integers: ");
    scanf("%d%d", &n1, &n2);
    while (d <= n1 && d <= n){
      d++;
        if (n1 % d == 0 && n2 % d == 0){
          printf("The GCD is: %d", d);
    }
  }
}
