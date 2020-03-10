#include<stdio.h>
int fl(int n);
int main(int argc, char
  *argv[]) {for ( int i = 1;
   i < 8; i++){
printf("%d %d\n", i, fl(i));
}
return 0;
}
int fl(int n){
  static int x =
  1; x = x * n;
return x;
}
