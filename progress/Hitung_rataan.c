#include <stdio.h>
//membuat fungsi rataan//
double hitung_Rataan (int arr[], int besar);

int main()
{
  //buat array dg 5 unsur
  int saldo[5] = {1000, 2000, 3000, 4000, 5000};
  //buat variabel rataan//
  double rtn;
  //lewatkan pointer kepada array sebagai sebuaj argumen//
  int b = sizeof(saldo) / sizeof(saldo[0]); //banyak elemen saldo//
  rtn = hitung_Rataan (saldo, b);
  
  //keluarkan nilai kembalian//
  printf("Nilai rataan adalah: %f", rtn);
  
  return 0;
}

double hitung_Rataan (int arr[], int besar)
{
  int i;
  double rtn;
  double jumlah = 0;
  for (i = 0; i < besar; i++)
  {
    jumlah += arr[i];
  }
  rtn = jumlah / besar;
  return rtn;
}