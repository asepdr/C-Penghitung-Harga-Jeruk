/*
  PROGRAM PENGHITUNG LUAS & KELILING PERSEGI PANJANG
  CREATED		 : ASEP DEDI RUKMANA
  KELAS - NIM 	 : 12.1D.03 - 12182876
*/

#include "stdio.h"
#include "conio.h"
#include "iostream.h"
#include "windows.h"

main() {
 float kg, harga, total;
 system("color 30");

 cout<<"Program Penghitung Harga Jeruk \n\n";

 //Proses Input
 cout<<"Harga Jeruk Per Kg : ";
 cin>>harga;
 cout<<"Jumlah Per Kg      : ";
 cin>>kg;

 //Proses Perhitungan
 total=harga*kg;

 //Proses Output
 cout<<"Total Harga        : "<<total<<endl;
 getch();
}