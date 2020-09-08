#include<stdio.h>
int g(int n)
{
  printf("Enter the number: ");
  scanf("%d", &n);
  while(n > 0)
  {
    printf("Enter grade for course %d: ", n);
    n--;
  }
  return 0;
}
