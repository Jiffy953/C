#include<stdio.h>
int fac(int n);
int main()
{
  fac(5);
  fac(8);
  fac(10);
}
int fac(int n)
{
  int i = 1, temp = 1;
  while(i <= n)
  {
    temp *= i;
    ++i;
  }
  printf("%d\n", temp);
  return 0;
}
