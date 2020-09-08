#include<stdio.h>
#include<stdbool.h>
bool is_divis_by_seven(int x);
void print_bool(bool b);
int main(void)
{
  print_bool(is_divis_by_seven(10));
  print_bool(is_divis_by_seven(7));
  print_bool(is_divis_by_seven(21));
  print_bool(is_divis_by_seven(10));
  return 0;
}
bool is_divis_by_seven(int x)
{
  if(x % 7)
  {
    return false;
  }
  return true;
}

void print_bool(bool b)
{
  if (b)
  {
    puts("True");
  }
  else
    puts("False");
}
