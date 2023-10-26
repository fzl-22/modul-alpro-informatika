# Daftar Isi
* [Array 1 Dimensi](#array-1-dimensi)
* [Array 2 Dimensi](#array-2-dimensi)
* [String](#string)
# Array 1 Dimensi
## Pengenalan Array
```` Markdown
Array adalah struktur data pada memori yang terdiri dari  
sekumpulan elemen yang memiliki tipe data sama.

Syntax Array
<data_type> <array_name> [array_size] = {value1, value2, ..., valueN}
````
Array digunakan untuk menghindari penggunaan nama-nama peubah yang banyak hanya untuk data dengan tipe yang sama dan proses yang sama. Contohnya ketika terdapat lima buah data yang akan diproses. Apabila tidak menggunakan array, maka kita membutuhkan lima variabel untuk menyimpan nilai masing-masing data seperti `data1`, `data2`, `data3`, `data4`, `data5`. Namun, jika menggunakan array, maka kita hanya membutuhkan satu variabel yaitu `data[]`.

* Tidak Menggunakan Array
```C
#include <stdio.h>

int main()
{
   int data1 = 10;
   int data2 = 20;
   int data3 = 30;
   int data4 = 40;
   int data5 = 50;

   return 0;
}
```

* Menggunakan Array
```C
#include <stdio.h>

int main()
{
   int data[] = {10, 20, 30, 40, 50};

   return 0;
}
```

Kita dapat mengakses array bedasarkan indexnya. Array memiliki 0 sebagai indeks pertama, bukan 1. Jika ukuran array adalah n, untuk mengakses elemen terakhir, digunakan indeks n-1.

![](https://media.geeksforgeeks.org/wp-content/uploads/C-Arrays.jpg)
## Kekurangan dan Kelebihan Array
### Kekurangan Array
* **Ukurannya Statis:** Memori yang dialokasikan ke array tidak dapat diperluas atau diperkecil. Hal ini tidak memungkinkan penyimpanan data tambahan jika array sudah penuh. Jika ukuran array perlu ditingkatkan selama proses pengembangan di tahap selanjutnya, maka satu-satunya pilihan adalah membuang array yang ada dan membuat array baru dengan ukuran yang diperbesar
* **Penggunaan Memori:** Seringkali array dideklarasikan dengan ukuran yang besar untuk mengantisipasi apabila dibutuhkan ekspansi data. Ukuran yang besar membuat array memiliki index yang tidak memiliki nilai, hal ini merupakan pemborosan memori.
```C
char matkul[100] = {"ALGORITMA"}; 
//Hal ini merupakan pemborosan memori karena tidak semua index array matkul terisi
```
### Kelebihan Array
* **Optimasi Kode:**
Array dapat menyimpan dan mengakses sejumlah besar data dengan menulis sepotong kecil kode tanpa harus mendeklarasikan variabel satu per satu.
* **Fungsionalitas:**
Array digunakan untuk memproses banyak algoritma seperti searching, sorting, maximum and minimum values, dan reversing dengan cara yang sederhana.
* **Berbasis Index:**
Array menggunakan struktur data berbasis indeks yang membantu mengidentifikasi setiap elemen dalam array dengan mudah menggunakan indeks.
## Input dan Output Array 1 Dimensi
Kita dapat melakukan proses input dan output array dengan menggunakan perulangan. Terdapat tiga macam perulangan yaitu `for`, `while`, dan `do while`. Kita dapat menggunakan ketiga jenis perulangan tersebut, namun pada kesempatan kali ini kita akan belajar dengan menggunakan perulangan `for` (materi perulangan akan dijelaskan lebih lanjut pada beberapa pertemuan selanjutnya).

Berikut merupakan syntax dari perulangan `for`:
```C
for (<initial_value>; <condition>; <increment_or_decrement>) 
{
   <statements>;
}
```
### Output
Berikut merupakan kode program untuk menampilkan value di dalam array.
```C
#include <stdio.h>

int main()
{
   int nilai[5] = {70, 65, 80, 95, 90};
   
   // Menampilkan value pada index tertentu
   printf("Nilai index ke 3 adalah %d", nilai[3]);
   printf("\n\n");

   // Menampilkan seluruh value pada array
   for(int i = 0; i < 5; i++){
      printf("Nilai Index ke %d adalah %d\n", i, nilai[i]);
   }
   return 0;
}
```
Output
```C
Nilai Index ke 0 adalah 70
Nilai Index ke 1 adalah 65
Nilai Index ke 2 adalah 80
Nilai Index ke 3 adalah 95
Nilai Index ke 4 adalah 90
```
Selain itu, kita dapat mengubah value dari suatu array yang sudah ada dengan kode program berikut.
```C
#include <stdio.h>

int main()
{
   int nilai[5] = {70, 65, 80, 95, 90};
   
   for(int i = 0; i < 5; i++){
      printf("Nilai Index ke %d adalah %d\n", i, nilai[i]);
   }

nilai[1] = 75;
nilai[3] = 90;

printf("\nNew Value:\n");

for(int i = 0; i < 5; i++){
      printf("Nilai Index ke %d adalah %d\n", i, nilai[i]);
   }
   return 0;
}
```
Output
```C
Nilai Index ke 0 adalah 70
Nilai Index ke 1 adalah 65
Nilai Index ke 2 adalah 80
Nilai Index ke 3 adalah 95
Nilai Index ke 4 adalah 90

New Value:
Nilai Index ke 0 adalah 70
Nilai Index ke 1 adalah 75
Nilai Index ke 2 adalah 80
Nilai Index ke 3 adalah 90
Nilai Index ke 4 adalah 90
```
### Input
Sama seperti proses output, proses input juga dapat menggunakan perulangan untuk memasukkan nilai ke dalam array. Kita dapat menginisialisasi index dari array yang akan diisi dengan data untuk melakukan input elemen array.
```C
#include <stdio.h>

int main()
{
   int banyak_data = 5;

   int nilai[banyak_data];

   for (int i = 0; i < banyak_data; i++){
      printf("Masukkan nilai elemen array ke-%d : ", i);
      scanf("%d", &nilai[i]);
   }
   printf("\n\n");

   for (int i = 0; i < banyak_data; i++){
      printf("Nilai array ke-%d : %d\n", i, nilai[i]);
   }
   return 0;
}
```
Input
```C
50
60
70
75
80
```
Output
```C
Nilai array ke-0 : 50
Nilai array ke-1 : 60
Nilai array ke-2 : 70
Nilai array ke-3 : 75
Nilai array ke-4 : 80
```
# Array 2 Dimensi
Sebuah array dikatakan multidimensional apabila tiap elemen array menampung array lainnya. Apabila array satu dimensi hanya memiliki sebuah index, array multidimensi memiliki dua atau lebih index untuk mengakses elemen dalam array tersebut.

Cara deklarasinya pun berbeda dari array satu dimensi. Kita memerlukan N buah kurung siku untuk membuat array dengan N-dimensi.

Berikut adalah contoh kode program dengan array dua dimensi:
```C
#include <stdio.h>

int main () 
{  
    int matrix[4][5];
    matrix[2][3] = 101;
    matrix[3][4] = 420;
    return 0;
}
```
Kita dapat mengakses suatu index pada array dua dimensi dengan cara berikut.
```C
#include <stdio.h>

int main()
{
    int matrix[2][3] = {{1, 2, 3}, {3, 4, 5}};
    printf("%d", matrix[0][1]);
}
```
Output
```C
2
```

Apabila diilustrasikan, bentuk array dua dimensi layaknya baris dan kolom, seperti gambar di bawah.

![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRy9SRu-03fi7lK--P1ZLYRSv5ytikWSp1HeQ&usqp=CAU)

Selain bentuk dua dimensi, kita dapat membuat array hingga N-dimensi, sesuai kebutuhan.

Kita dapat melakukan proses input dan output pada multidimensional array (2 dimensi atau lebih) dengan menggunakan nested loop.

Berikut kode program untuk melakukan proses input dan output pada array 2 dimensi.
```C
#include <stdio.h>

int main()
{
   int x = 2;
   int y = 3;

   int matrix [x][y];

   for(int i = 0; i < x; i++){
      for(int j = 0; j < y; j++){
         printf("Masukkan nilai matrix pada index ke [%d][%d] : ", i, j);
         scanf("%d", &matrix[i][j]);
      }
   }
   printf("\n\n");
   for(int i = 0; i < x; i++){
      for(int j = 0; j < y; j++){
         printf("Nilai matrix pada index ke [%d][%d] adalah %d\n", i, j, matrix[i][j]);
      }
   }
   return 0;
}
```
Input
```C
50
60
70
80
90
100
```
Output
```C
Nilai matrix pada index ke [0][0] adalah 50     
Nilai matrix pada index ke [0][1] adalah 60     
Nilai matrix pada index ke [0][2] adalah 70     
Nilai matrix pada index ke [1][0] adalah 80     
Nilai matrix pada index ke [1][1] adalah 90     
Nilai matrix pada index ke [1][2] adalah 100
```
# String
## Pengenalan String
````
Secara umum, string merupakan kumpulan dari satu atau lebih karakter.
Spesifik pada bahasa C, string didefinisikan sebagai kumpulan karakter
yang diakhiri oleh karakter null (`'\0'`).
````

Sehingga apabila digambarkan seperti berikut :

![](https://www.tutorialspoint.com/functional_programming/images/strings.jpg)

## Representasi String
### Deklarasi String
Pada bahasa C, string direpresentasikan oleh array bertipe `char`. Contoh pendeklarasian string:
```C
#include <stdio.h>

int main () 
{  
    char a[]= "Nasa";
    return 0;

}
```
Contoh di atas akan mendeklarasikan string bernama str dengan kapasitas 5 karakter, di mana `str[0] = 'N'`, `str[1] = 'a'`, `str[2] = 's'`, `str[3] = 'a'`, dan`str[4] = '\0'`. Perhatikan bahwa a[4] berisi karakter '\0' (null character), walaupun dalam literal string di atas tidak ada karakter tersebut.

Dalam bahasa C, karakter null digunakan untuk menandakan akhir dari sebuah string.

Contoh pendeklarasian string (2):
```C
#include <stdio.h>

int main () 
{  
    char b[8];
    return 0;

}
```
Contoh di atas akan mendeklarasikan string bernama array yang dapat menampung maksimal 8 karakter, termasuk null character.

### Input String
Untuk menerima input string dari user, kita dapat menggunakan `scanf` atau `gets`. Perintah `scanf` akan membaca inputan string dari user dan berhenti ketika ada whitespace ataupun interupsi dari pengguna. Sedangkan `gets` akan membaca satu baris kumpulan karakter hingga enter atau interupsi dari pengguna.

Contoh source code penggunaan `scanf` untuk membaca string:
```C
#include <stdio.h>

int main () 
{  
    char nama[8];

    printf("Nama : ");
    scanf("%s", nama);

    printf("Nama anda : %s", nama);
    return 0;
}
```

Kita dapat menggunakan fungsi `fgets` untuk menyimpan String dan fungsi `puts` untuk menampilkan value yang tersimpan. Kedua fungsi tersebut menjadi pengganti dari fungsi scan untuk membaca masukan dan fungsi `printf` untuk menampilkan value dari String. Berikut ini adalah contohnya :
```C
#include <stdio.h>

int main () 
{  
    char nama[8];

    printf("Nama : ");
    fgets(nama, sizeof(nama), stdin);

    printf("Nama anda: ");
    puts(nama);
    return 0;
}
```
### String Array
String pada pemrograman C dapat menyimpan 1 kata atau 1 kalimat. Namun yang disimpan beruba karakter per indexnya. Sehingga apabila kita ingin menyimpan 1 kata atau 1 kalimat dalam 1 kelompok, maka kita dapat menggunakan array 2 dimensi. Seperti contoh yang ada dibawah ini. Dimana terdapat 4 nama yang disimpan, setiap nama disimpan dalam 1 row.
```C
#include <stdio.h>

int main ()
{
    char team[4][10] = {"Rose", "Jennie", "Jisoo", "Lisa"};

    // Output nilai sebuah index
    printf("%s\n", team[0]);
    printf("%s\n", team[1]);
    printf("\n");

    // Output nilai semua index (cara 1)
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 10; j++){
            printf("%c", team[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Output nilai semua index (cara 2)
    for(int i = 0; i < 4; i++){
        printf("%s", team[i]);
        printf("\n");
    }

    return 0;
}
```