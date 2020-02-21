#include<stdio.h>
int main()
{
  int i = 1;
  while (i <= 101)
  {
    if( i % 2 == 0)
    {
      printf("%d  ", i);
    }
    if(i % 10 == 0)
    {
      printf("\n");
    }
    i++;
  }
}
