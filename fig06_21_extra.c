// Fig. 6.21: fig06_21.c
// Initializing multidimensional arrays.
#include <stdio.h>
// void printArray(int a[][3]); // function prototype
// function main begins program execution
int main(void)
{
   int arrayd[5][3];  //= { { 1, 2, 3 }, { 4, 5, 6 } };
   puts("Please enter the value of two dimensional array -->");
//   printArray(array1);
   for (int i = 0; i <= 4; ++i) {
      // output column values
      for (int j = 0; j <= 2
        ; ++j) {
         printf("\n");
         scanf("%d", &arrayd[i][j]);
      }
    }
   for (int i = 0; i <= 4; ++i) {
      // output column values
      for (int j = 0; j <= 2; ++j) {
         printf("%d ", arrayd[i][j]);
      }
      printf("\n"); // start new line of output
   }
}
