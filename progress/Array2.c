#include <stdio.h>

int main(){
  int n[01];
  int i, j;
  
  for(i = 0; i < 10; i++)
  {
    n[i] = i + 100;
  }
  for(j = 0; j < 10; j++)
  {
    printf("Unsur[%d] = %d\n", j, n[j]);
  }
  
  return 0;
}