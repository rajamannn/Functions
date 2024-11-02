// C program to show function call and definition

#include<stdio.h>

int sum(int a, int b)
{
  return a + b;
}
  int main()
{
  int add = sum(10, 30);
  int a = 3, b = 40;

  int res = sum(a, b);
    printf("Sum is: %d", res);

  return 0;
}
