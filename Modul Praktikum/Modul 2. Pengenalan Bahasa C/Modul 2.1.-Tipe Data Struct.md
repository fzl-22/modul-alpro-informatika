# Struct
## Pengertian Tipe Data Struct
Dalam bahasa C, struct adalah tipe data bentukan yang terdiri dari kumpulan tipe data lain. Struct mirip seperti array, tapi struct bisa menampung lebih dari 1 jenis tipe data. 
Tipe data struct cocok dipakai untuk menampung data berkelompok. Misalnya kita ingin membuat persegi panjang. Setiap persegi panjang memiliki panjang dan lebar, jika kita menggunakan cara biasa, 2 data tersebut ditampung kedalam 2 variabel seperti berikut : 
```C
int panjang = 10;
int lebar = 5;
```
jika ingin membuat lebih dari 1 persegi panjang, bisa dibuat ke dalam bentuk array seperti di  bawah ini : 
```C
int panjang[3] = {10,8,7};
int lebar[3] = {5,4,6};
```
cara di atas bisa berjalan, kalau ingin mengakses persegi panjang pertama, kita bisa memanggil index ke 0 dan seterusnya. Namun hal itu cukup membingungkan, terutama saat menggunakan tipe data yang berbeda. Dalam kasus ini, tipe data struct cocok untuk digunakan.

## Penggunaan Tipe Data Struct
Tipe data struct adalah tipe data bentukan, dimana kita harus buat dulu seperti apa isi komponen dari struct, baru kemudian diakses dari kode program utama.

Kita akan bahas dengan contoh kode program berikut ini:
```C
#include <stdio.h>
#include <stdlib.h>
 
struct rectangle {
   int panjang;
   int lebar;
};
 
int main(void)
{
  struct rectangle persegi;
  persegi.panjang = 10;
  persegi.lebar = 5;
  printf("panjang persegi : %d \n", persegi.panjang);
  printf("Lebar persegi   : %d \n", persegi.lebar);
 
  return 0;
}
```
Output : 
```
panjang persegi : 10
Lebar persegi   : 5
```
Proses pembuatan tipe data struct ditulis di luar main(),seperti yang ada pada contoh di atas, ditulis pada baris 4-7. syntaks dari struct seperti berikut : 
```
struct <namaStruct> {
   <tipeDataVariabel> <namaVariabel>;
};
```
lalu jika ingin melakukan memasukkannya pada program utama (main), dapat dilakukan seperti contoh di atas pada baris 11, atau bisa diliat di bawah ini;
```
int main(){
   struct <namaStruct> <namaLainStruct>;
}
```
nah sekarang pada variabel `persegi` (seperti contoh kode diatas), merupakan tipe data bentukan yang terdiri dari 2 element, yakni : 
* `persegi.panjang`
* `persegi.lebar`

tanda `.` digunakan untuk mengakses sub struktur dari `persegi` sesuai dengan pendefinisian `struct rectangle`.
proses menginputkan data ke dalam variabel `persegi` dapat dilakukan seperti pada contoh program di atas pada baris 12 - 13, dan pada baris 14-15 merupakan output dari kedua data `persegi`, dan caranya sama seperti pemanggilan variabel seperti yang biasa kita lakukan, hanya bedanya kita sekarang menggunakan `struct persegi` sehingga cara aksesnya adalah `persegi.panjang` dan `persegi.lebar`.
Lalu bagaimana jika kita ingin mengakses lebih dari 1 persegi? tidak masalah, kita bisa membuat variabel persegi01, persegi02, persegi03, atau seterusnya, tapi hal tersebut cukup merepotkan apabila kita ingin membuat persegi yang sangat banyak. Nah, kita dapat meringkas hal tersebut dengan menggunakan array seperti contoh di bawah ini : 
```C
#include <stdio.h>
#include <stdlib.h>
 
struct rectangle {
   int panjang;
   int lebar;
};
 
int main(void)
{
   struct rectangle persegi[3];
   persegi[0].panjang = 10;
   persegi[0].lebar = 5;
   printf("panjang persegi 1 : %d \n", persegi[0].panjang);
   printf("Lebar persegi 1   : %d \n\n", persegi[0].lebar);
  
   persegi[1].panjang = 8;
   persegi[1].lebar = 4;
   printf("panjang persegi 2 : %d \n", persegi[1].panjang);
   printf("Lebar persegi 2    : %d \n\n", persegi[1].lebar);

   persegi[2].panjang = 7;
   persegi[2].lebar = 6;
   printf("panjang persegi 3 : %d \n", persegi[2].panjang);
   printf("Lebar persegi 3   : %d \n\n", persegi[2].lebar);
   
   return 0;
}
```
Output : 
```
panjang persegi 1 : 10 
Lebar persegi 1   : 5

panjang persegi 2 : 8
Lebar persegi 2   : 4

panjang persegi 3 : 7
Lebar persegi 3   : 6
```

## Input Tipe Data Struct
Sekarang kita akan mencoba cara agar user dapat menginput data pada tipe data Struct, kita bisa menggunakan fungsi `gets()` atau `scanf`. lihatlah program dibawah ini : 
```C
#include <stdio.h>
#include <stdlib.h>
 
struct mahasiswa{
  char nama[50];
  int umur;
};

int main(){
  struct mahasiswa mhs;
  printf("=== Program Pendataan Mahasiswa ===\n\n");

  printf("Nama Mahasiswa : ");
  gets(mhs.nama);

  printf("Umur Mahasiswa : ");
  scanf(" %d", &mhs.umur);

  printf("\nMahasiswa bernama %s memiliki umur %d \n", mhs.nama, mhs.umur);

  return 0;
}
```
Kita menggunakan struct baru yaitu `struct mahasiswa` dan juga variabel `mhs`. Kata menggukan fungsi `gets()` dan `scanf()` untuk melakukan proses input. Ketika program berjalan, user diminta untuk mengisi data nama dan umur mahasiswa. Kedua data tersebut akan disimpan kedalam `mhs.nama` dan `mhs.umur`