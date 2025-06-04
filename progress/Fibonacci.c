#include <stdio.h>

int fibonaci(int i)
{
  if(i == 0)
  {
    return 0;
  }
  if(i == 1)
  {
    return 1;
  }
  return fibonaci(i-1) + fibonaci(i-2);
}

int main()
{
  int i;
  printf("Deret Fibonacci");
  for(i = 0; i < 10; i++)
  {
    printf("%5d", fibonaci(i));
  }
  return 0;
}