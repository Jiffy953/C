#include<stdio.h>
#include<math.h>
double f(double x);
int main()
{
  f(0.3);
  printf("\n\n");
  f(0.5);
  printf("\n\n");
  f(0.8);
}
double f(double x)
{
  int i = 1;
  while(i <= 20)
  {
    printf("%f\n", pow(-1,i + 1) * (pow(x, i)/i));
    ++i;
  }
  return 0;
}
