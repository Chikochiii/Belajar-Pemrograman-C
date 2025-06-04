#include <stdio.h>

int main()
{
  int a[7][2] = {
    {0, 0},
    {1, 2},
    {2, 4},
    {3, 6},
    {4, 8},
    {5, 10},
    {6, 12}
  };
  int i, j;
  
  for ( i = 0; i < 7; i++)
  {
    for ( j = 0; j < 2; j++)
    {
      printf("a[%d][%d] = %d\n", i, j, a[i][j]);
    }
  }
  return 0;
}