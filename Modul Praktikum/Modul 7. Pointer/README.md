# Daftar Isi
* [Pengertian Pointer](#pengertian-pointer)
* [Alamat dan Nilai Variabel](#alamat-dan-nilai-variabel)
* [Deklarasi Pointer](#deklarasi-pointer)
* [Penggunaan Pointer dalam Array](#penggunaan-pointer-dalam-array)
# Pengertian Pointer
````
Pointer adalah sebuah variabel yang berisikan alamat memori dari variabel tertentu. 
Pointer nantinya dapat mengakses data dari variabel yang direferensikan.
````
Setiap variabel pada program yang kita buat pasti memiliki alamat memori. Alamat memori berfungsi untuk menentukan lokasi penyimpanan data suatu variabel pada memori (RAM).

![](https://upload.wikimedia.org/wikipedia/commons/thumb/b/b4/Pointers.svg/1200px-Pointers.svg.png)
- Pada gambar di atas dimisalkan jika variabel `x` memiliki alamat memori 1000 dan pointer `ptr` memiliki alamat memori 2000.
- `int x = 5` berguna untuk menyimpan value 5 ke dalam variabel `x`.
- Simbol ampersand `&` berguna untuk mendapatkan alamat memori dari variabel tertentu, maka `int *ptr = &x` berguna untuk menyimpan value berupa alamat memori dari variabel `x` ke dalam pointer `ptr`.
- Maka didapati bahwa variabel `x` memiliki value 5 serta memiliki alamat memori 1000 dan pointer `ptr` memiliki value 1000(alamat memori dari variabel `x`) serta memiliki alamat memori 2000.


# Deklarasi Pointer
Pointer dideklarasikan dengan menggunakan simbol asterik `*` untuk mendeklarasikan nama pointer dan apabila diperlukan, pointer dapat menggunakan simbol ampersand `&` untuk mendapatkan alamat memori variabel tertentu yang akan dimasukkan sebagai value untuk pointer tersebut. Adapun syntax dari pointer adalah sebagai berikut.
````
<tipe_data> *<nama_pointer> = &<alamat_memori_variabel_yang_diakses>;
atau
<tipe_data>* <nama_pointer> = &<alamat_memori_variabel_yang_diakses>;

int *px = &x;
atau
int* px = &x; 
````

# Alamat dan Nilai Variabel
Alamat memori pointer adalah alamat memori yang digunakan untuk menyimpan pointer. 

Coba Program Berikut :
````C
int x = 2038;
int *px = &x;

printf("Alamat memori x: %p\n", &x);
printf("Nilai x: %d\n\n", x);

printf("Alamat memori pointer px: %p\n", px);
printf("Isi pointer px: %d\n\n", *px);

x = 1991;
printf("Alamat memori pointer px: %p\n", px);
printf("Isi pointer px: %d\n\n", *px);

*px = 2022;
printf("Alamat memori x: %p\n", &x);
printf("Nilai x: %d\n\n", x);
return 0;
````
Contoh Output:
````
Alamat memori x: 0x7ffee0b80efc
Nilai x: 2038

Alamat memori pointer px: 0x7ffee0b80efc
Isi pointer px: 2038

Alamat memori pointer px: 0x7ffee0b80efc
Isi pointer px: 1991

Alamat memori x: 0x7ffee0b80efc
Nilai x: 2022
````
Pointer `*px` akan berisi alamat memori dari variabel `x`, karena kita mengisinya dengan `&hp`.

Dengan begini,
Pointer *px akan bisa mengakses nilai alamat memori `0x7ffee4b36ee8` yang merupakan alamat memori dari variabel `x`.

Jika kita ingin mengubah nilai pada alamat memori tersebut maka kita bisa gunakan pointer *px seperti contoh:
````C
    *px = 2022;
````
Maka, alamat memori `0x7ffee4b36ee8` akan bernilai 2022 begitu juga dengan variabel x.

## Mengakses Data dengan Pointer
````C
int waktu = 0;

// membuat pointer yang mereferensikan alamat dari variabel waktu
int *p_waktu = &waktu;

// mengakses variabel time melalui pointer
printf("Value *p_waktu = %d\n", *p_waktu);
printf("Value waktu awal = %d\n", waktu);

// mengubah data variabel time melalui pointer
*p_waktu = 5;

// melihat value dari variabel waktu
printf("Value waktu setelah diubah = %d\n", waktu);
return 0;
````
## Pass by Reference
Pemanggilan dengan referensi (Pass By Reference) merupakan upaya untuk meneruskan alamat dari suatu variabel ke dalam fungsi. Cara ini dapat dipakai untuk mengubah isi suatu variabel di luar fungsi.
````C
// membuat prosedur dengan parameter berupa pointer
void tambah_5 (int *angka){
    *angka = *angka + 5;
}

int main (){
    int nilai = 90;

    printf("Nilai awal adalah %d", nilai);

    /* memanggil prosedur tambah_5 dengan argumen disertai simbol ampersand `&` yang
    digunakan untuk meneruskan alamat variabel nilai ke dalam prosedur tambah_5 */
    tambah_5(&nilai);
    printf("\nNilai setelah ditambah adalah %d",nilai);
}
````
## Double Pointer
````C
int jumlah = 13;

// membuat pointer untuk variabel jumlah
int *ptr_1;
// menyimpan alamat memori dari variabel jumlah
ptr_1 = &jumlah;

// membuat pointer untuk pointer ptr_1
int **ptr_2;
// menyimpan alamat memori dari pointer ptr_1
ptr_2 = &ptr_1;

// Menampilkan value dari variabel jumlah
printf("Value jumlah = %d\n", jumlah);
printf("Value jumlah menggunakan single pointer = %d\n", *ptr_1);
printf("Value jumlah menggunakan double pointer = %d\n", **ptr_2);
````
# Penggunaan Pointer dalam Array
## Array 1 Dimensi
````C
int my_arr[5] = {1, 2, 3, 4, 5}, i;
int *p;
p = my_arr;
// dapat juga dituliskan // p = &my_arr[0]

for(i = 0; i < 5; i++){
    printf("Isi dari *p[%d] = %d\n", i, *(p + i) );
}
````
## Array 2 Dimensi
````C
int arr1[5][5] = { { 0, 1, 2, 3, 4 },
		{ 2, 3, 4, 5, 6 },
		{ 4, 5, 6, 7, 8 },
		{ 5, 4, 3, 2, 6 },
		{ 2, 5, 4, 3, 1 } };
int* arr2[5][5];

/* Menginisialisasi setiap elemen dari pointer array
arr2 dengan alamat memori array arr1 */
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
	arr2[i][j] = &arr1[i][j];
    }
}

// Menampilkan array menggunakan array pointer
printf("The values are\n");
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
	printf("%d ", *arr2[i][j]);
    }
printf("\n");
}
````
## String Array
````C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ROW 5
#define COL 10

int main()
{
    char nama[ROW][COL] = {"Sana", "Jihyo", "Mina", "Momo", "Tzuyu"};

    // menggunakan pointer
    char (*ptr)[COL] = nama;

    printf("Nama\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%i. %s\n", i+1, *ptr++);
    }

    return 0;
}
````
