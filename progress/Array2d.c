#include <stdio.h>

int main(){
  int a[3][3]= {
    {1, 2, 3},
    {2, 3, 1},
    {3, 1, 2}
  };
  
  printf("array [2][1] adalah: %d\n", a[2][1]);
  return 0;
}