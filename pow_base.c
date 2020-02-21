#include<stdio.h>
#include<math.h>
int main()
{
  float base, power;
  printf("Enter a base and then power: ");
  scanf("%f%f", &base, &power);
  printf("%.2f", pow(base, power));
}
