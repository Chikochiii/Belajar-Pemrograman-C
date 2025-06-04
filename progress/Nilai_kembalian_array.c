#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int * ambil_Acakb()//fungsi nilai acak//
{
  static int r[10];//larik statis sebagai nilai kembalian//
  int i;
  
  //atur sebaran menggunakan fungsi srand dari stdlib.h //
  srand((unsigned)time(NULL));
  for ( i = 0; i< 10; i++)
  {
    r[i] = rand();
    printf("     r[%d] = %d\n", i, r[i]);
  }
  return r;
}

int main()
{
  //fungsi utama untuk memanggil fungsi diatas//
  int *p;
  int i;
  p = ambil_Acakb();
  for( i = 0; i < 10; i++ )
  {
    printf("*(p + %d) : %d\n", i, *(p + i));
  }
  return 0;
}

