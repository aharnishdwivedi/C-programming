#include<stdio.h>
int main()
{
  int a,b,c;
  a = 5;
  b = 8;
  c = a;
  a = b;
  b = a;
  printf ("a = %d",a);
  printf ("b = %d",b);
  return 0;
}
