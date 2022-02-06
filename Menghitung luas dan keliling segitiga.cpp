//Tugas coding adt 
//Nama : Irfan luthfi 
//NPM : (G1A021090)
#include <iostream>
//iostream adalah header 

using namespace std;

main(){
 int pilih, alas, tinggi,sisi1,sisi2,sisi3;
 //Variabel di atas merupakan variabel yang bertipe integer
 float luas, keliling;
 //Variabel luas dan keliling merupakan variabel yang bertipe data float
 char ulang[1];
 menu:
 cout<<"Menghitung luas dan keliling segitiga\n\n";
 cout<<"Pilih Menu Yang Akan Dilakukan\n";
 cout<<"[1]Luas Segitiga\n[2]Keliling segitiga";
 //Luas segitiga dan keliling segitiga merupakan menu yang nanti dapat kita pilih
 cout<<"\nPilihan : ";cin>>pilih;
 //jika memilih angka 1, maka artinya menghitung luas segitiga
 //jika memeilih angka 2, maka artinya menghitung keliling segitiga
 cout<<"\n\n";
 if(pilih ==1){
  cout<<"Menghitung Luas Segitiga\n";
  cout<<"Masukkan Alas Segitiga : "; cin>>alas;
  cout<<"Masukkan Tinggi Segitiga : "; cin>>tinggi;
  cout<<"---------------------------------------------\n";
  //Jika kita memilih angka 1 atau menghitung luas segitiga
  //kita perlu untuk menginputkan variabel alas dan tinggi 
  //yang nantinya akan dijumlahkan menggunakan rumus luas segitiga
  
  //Memasukkan Rumus Luas Segitiga (1/2*alas*tinggi)
  luas = 0.5*alas*tinggi;
  //Rumus luas segitiga akan disimpan pada variabel luas
  cout<<"Luas Segitiga : "<<luas;
  //setelah kita memsasukkan variabel luas dan tinggi
  //akan di outputkan oleh program sebagai hasil akhir
 }else if(pilih ==2){
  cout<<"Menghitung Keliling Segitiga\n";
  //jika kita memilih angka 2 atau menghitung keliling segitiga
  //kita oerlu untuk menginputkan variabel sisi 1, sisi 2, dan sisi 3
  //yang nantinya akan dijumlahkan menggunakan rumus keliling segitiga
  cout<<"Masukkan Sisi 1 Segitiga : "; cin>>sisi1;
  cout<<"Masukkan Sisi 2 Segitiga : "; cin>>sisi2;
  cout<<"Masukkan Sisi 3 Segitiga : "; cin>>sisi3;
  cout<<"---------------------------------------------\n";
  
  //Memasukkan Rumus keliling Segitiga (sisi1 + sisi2 + sisi3)
  keliling = sisi1+sisi2+sisi3;
  //Rumus keliling segitiga tersebut akan disimpan pada variabel keliling
  cout<<"Keliling Segitiga : "<<keliling;
  //variabel yang sudah diisi oleh rumus keliling segitiga
  //akan di outputkan oleh program sebagai hasil akhir
 } else{
  cout<<"Maaf, Pilihan Tidak tersedia";
  //Jika angka yang di inputkan tidak ada dalam daftar, 
  //akan muncul output seperti yang ada di atas
 }
 cout<<"\n\nApakah Ingin Mengulang lagi?(Y/T)"; cin>>ulang;
 
 return 0;
 //return bertujuan untuk memulai kembali program
}
