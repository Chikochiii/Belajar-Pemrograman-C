#include <stdio.h>

enum hari {senin, selasa, rabu, kamis, jumat, sabtu, minggu};

int main()
{
  enum hari sekarang;
  sekarang = sabtu;
  printf("Sekarang adalah hari ke-%d", sekarang + 1);
  return 0;
}