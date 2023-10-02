# Daftar Isi
* Struktur Bahasa C 
* Tipe Data & Variabel
* Operasi Aritmatika
* Operator Logical/Relasional

# Struktur Bahasa C 
## Program "Hello World!"
Mari kita mulai dengan membuat Program sederhana seperti menampilkan kalimat `Hello World!`. Pertama-tama, Buat file pada IDE Kalian, lalu bisa kalian tuliskan program dibawah ini pada IDE kalian, kemudian compile dan jalankan.

``````` C
#include <stdio.h>

int main()
{
  printf("Hello World!\n");
  return 0;
}
```````
Setelah kode di atas dijalankan, maka akan menghasilkan output sebagai berikut :
```````
Hello World!
```````
## Struktur Program
Untuk lebih memahami cara kerja program diatas, mari kita uraikan bagian-bagian code satu-satu persatu.
### Line 1 : Header File
File dengan ekstensi `.h` dan memiliki preprocessor directive (`#include`). Dalam kasus ini, `#include <stdio.h>` berarti program menyertakan header file `<stdio.h>` yang memungkinkan program untuk melakukan operasi input dan output standar seperti `printf()` (yang ada pada line 4).

### Line 3 : Fungsi `main()`
Fungsi main() adalah fungsi utama, yaitu fungsi yang akan dieksekusi terlebih dahulu oleh compiler.

### Line 4 & 7 : Pembuka dan Penutup Fungsi
Simbol `{` dan `}` secara berturut-turut merupakan awal dan akhir sebuah fungsi. Di antara kedua simbol tersebut, terdapat tubuh fungsi (function body) yang berisikan statement dari fungsi tersebut.

### Line 5 & 6 : Statement
Sebaris program yang berisi perintah tertentu dan diakhiri oleh simbol semicolon (`;`). Dalam kasus ini, `printf("Hello World!\n");` memerintahkan komputer untuk mencetak string bertuliskan "Hello World" dan baris baru (`\n`). Sedangkan, `return 0` pada menandakan bahwa fungsi `main` tidak mengembalikan value apapun.

### Komentar (Comments)
Komentar adalah bagian dari program yang tidak akan dieksekusi. Komentar dapat digunakan untuk menjelaskan kode, dan membuatnya lebih mudah dibaca, misalnya untuk menjelaskan bagian kode sehingga dapat lebih mudah dipahami oleh programmer lainnya atau. Komentar juga dapat digunakan untuk mencegah eksekusi kode aslinya saat menguji kode alternatif.

### Komentar Single-line
Sesuai dengan namanya, komentar Single-line ini hanya bekerja pada satu baris. Komentar Single-line dimulai dengan dua garis miring ( `//` ). berikut merupakan contoh komentar Single-line 1 sebelum baris kode :
``````` C
// Ini adalah komentar

printf("Hello World!");
```````

Komentar Single-line juga bisa diletakkan setelah baris kode seperti contoh dibawah ini : 
``````` C
printf("Hello World!");      // Ini adalah komentar
```````
### Komentar Multi-line
Setelah mengetahui Komentar Single-line, ada juga komentar yang disebut Komentar Multi-line. Jika Komentar Single-line hanya bisa digunakan pada 1 baris, Komentar Multi-line bisa digunakan untuk lebih dari satu baris. Komentar ini dimulai dengan simbol `/*` dan ditutup dengan simbol `*/`. Semau karakter yang ada di dalam kedua simbol tersebut akan diabaikan oleh Compiler

``````` C
/* 
Ini adalah komentar multi-line 
Kode dibawah ini akan me-outputkan
kalimat "Hello World"
*/
printf("Hello World");  
```````

![image](https://user-images.githubusercontent.com/90125356/194712726-0f27b7c4-c95f-430c-91e7-1c308407cb0c.png)

# Tipe Data & Variabel
## Variabel
### Pengenalan Variabel
Variabel adalah suatu tempat yang digunakan untuk menampung data di memori yang mempunyai nilai yang dapat berubah–ubah selama proses program. Dalam Bahasa Pemograman C, variabel menyimpan data sesuai dengan tipe data tertentu, seperti variabel menyimpan angka yang termasuk dalam tipe integer (bilangan bulat).
<br><br>
Variabel ini dapat kita analogikan sebagai gelas. Gelas ini dapat kita definisikan sebagai variabel. Gelas ini pada umumnya hanya untuk menampung cairan. cairan ini bisa kita sebut sebagai Tipe data. kemudian contoh dari cairan adalah air, sehingga air ini dapat disebut sebagai data yang ditampung oleh gelas

### Deklarasi Variabel
Dalam bahasa pemograman C, variabel harus dideklarasikan terlebih dahulu sebelum digunakan. Di bawah ini merupakan syntax mendeklarasikan variabel dalam bahasa C :
```````
<tipe_data> <nama_variabel> = <value>;
```````
`tipe_data` ini merupakan tipe data yang ada pada Bahasa C (seperti `int`), dan `nama_variabel` merupakan nama variabel yang kita inginkan seperti `x` atau `myAge`. tanda `=` ini digunakan untuk memberikan nilai pada variabel, dan `value` merupakan data yang ingin disimpan pada variabel seperti ( `10` atau `20` ) serta jangan melupakan untuk menutup dengan menggunakan simbol `;`.
``````` C
int x = 10;
int myAge = 20;
```````
Kalian juga bisa mendeklarasikan variabel tanpa memberikan nilai, dan bisa memberikan nilai nanti, seperti contoh di bawah ini ;
``````` C
int x;
x = 10;
```````
Apabila ingin mendeklarasikan lebih dari 1 variabel, bisa menggunakan simbol koma ( `,` ) untuk memisahkan antar variabel
``````` C
int x, y;
```````
**Note** : Jika memberikan nilai baru ke variabel yang sudah memiliki nilai, maka nilai yang baru akan menimpa nilai sebelumnya : 
``````` C
int x = 10;    // x bernilai 10
x = 15;        // sekarang x bernilai 15
```````
### Mengoutputkan Variabel
Di [materi](https://github.com/fzl-22/ALPRO-Informatika-ITTelkomSurabaya/wiki/Modul-1:-Pengenalan-Pemrograman-dan-Instalasi#input-dan-output) sebelumnya, kita telah mempelajari bagaimana cara mengoutputkan sebuah variabel. Untuk bisa mengoutputkan variabel, bisa menggunakan fungsi `printf()`, lalu di dalam fungsi `printf()` diberi format yang dimulai dengan tanda persentase `%`, dan diikuti dengan karakter. misalnya, untuk menampilkan nilai variabel `int`, maka bisa menggunakan format `%d` atau `%i` dan diapit oleh tanda kutip dua ( `" "` ) : 

``````` C
int x = 10;
prinf("%d", x);    // output 10
```````
Untuk menggabungkan teks dan variabel, kalian bisa mengikuti contoh di bawah ini : 
``````` C
int x = 10;
prinf("x bernilai : %d", x);    // output " x bernilai 10 " 
```````
dan untuk mencetak berbagai variabel dalam satu fungsi `printf()`, maka variabel dapat dipisahkan menggunakan tanda koma ( `,` ) : 
``````` C
int x = 12, myAge = 20;
prinf("Nomor favorit saya adalah %d dan umur saya adalah %d", x, myAge);    // output "Nomor favorit saya adalah 12 dan umur saya adalah 20" 
```````
Berikut merupakan **ATURAN** untuk penamaan variabel : 
* Variabel dapat berisi huruf, angka, dan garis bawah
* Variabel harus diawali dengan huruf atau garis bawah ( `_` )
* Variabel peka huruf besar-kecil ( `myAge` dan `myage` merupakan variabel yang berbeda)
* Nama tidak boleh berisi spasi putih atau karakter khusus seperti !, #, %, dll.
* kata kata yang terdapat pada fungsi bahasa C ( seperti `int` / `if` / `float` ) tidak bisa digunakan sebagai nama variabel.

## Konstanta
Konstanta sama halnya seperti variabel, bedanya terdapat pada nilainya yang bersifat tetap (konstan) Sesuai dengan namanya dan tidak bisa diubah sepanjang program berjalan. Inilah yang menjadi pembeda antara konstanta dengan variabel.
<br><br>
Terdapat dua cara untuk mendeklarasikan konstanta yaitu : 
### preprocessor ( `#define` )
Syntax yang digunakan adalah : 
```````
#define <nama_konstanta> <value>
```````
Example 
``````` C
#include <stdio.h>
#define pi 3.14

int main()
{
     int r = 7;
     printf("Luas lingkaran adalah %.2f \n", pi*r*r);
     return 0;
}
```````
### keyword `const`
Syntax yang digunakan adalah :
```````
const tipe_data nama_konstanta = value;
```````
example
``````` C
const float phi = 3.14;
```````
## Tipe Data
Tipe data merupakan jenis data yang ditampung oleh variabel. Tipe data menentukan jenis data seperti apa yang akan dimiliki oleh suatu variabel.
<br><br>
Dalam Bahasa C, terdapat beberapa jenis tipe data yaitu `char` (karakter), `int` (_integer_ / bilangan bulat), `float` (_floating point_ / bilangan real), `boolean` (boolean), `array`, `structure`, `pointer`, `enum`, dan `void`. Dan apabila kita kelompokkan, maka akan terdapat empat kelompok tipe data, diantaranya adalah tipe data dasar, tipe data turunan, tipe data enum (bentukan), dan void. Untuk kali ini kita akan berfokus pada tipe data dasar, yang berisi `char`, `int`, `bool`, `float`, dan `double`.
<br><br>

| Tipe Data | Memori (byte) | Jangkauan Nilai | format Specifier |
| -- | :--:| :--: | :--: |
| short | 2 | -2<sup>15</sup> s/d 2<sup>15</sup> - 1 | `%hi` |
| unsigned short | 2-4 | 0 s/d 2<sup>16</sup> - 1 | `%hu` |
| int | 4 | -2<sup>31</sup> s/d 2<sup>31</sup> - 1 | `%d` |
| unsigned int | 4 | 0 s/d 2<sup>32</sup> - 1| `%u` |
| long | 4 | -2<sup>31</sup> s/d 2<sup>31</sup> - 1 | `%ld` |
| unsigned long | 4 | 0 s/d 2<sup>32</sup> - 1| `%lu` |
| long long | 8 | -2<sup>63</sup> s/d 2<sup>63</sup> - 1 | `%lld` |
| unsigned long long | 8 | 0 s/d 2<sup>64</sup> - 1| `%llu` |
| float | 4 | ±3.4 x 10<sup>±38</sup> (estimasi) | `%f` |
| double | 8 | ±1.7 x 10<sup>±308</sup> (estimasi) | `%lf` |
| char | 1 | -2<sup>7</sup> s.d 2<sup>7</sup> - 1 | `%c` |

## Tipe Data Boolean
Tipe data ini hanya bisa diisi dengan salah satu dari 2 nilai: `true` atau `false`. Tipe data boolean banyak dipakai dalam percabangan kode program, atau untuk memutuskan apa yang harus dijalankan pada sebuah kondisi if else. Sebagai contoh, `boolean` bisa digunakan untuk menentukan apakah sebuah angka genap atau ganjil berdasarkan input dari pengguna. Untuk keperluan ini kita harus memeriksa apakah angka itu bisa dibagi 2 (untuk angka genap), atau tidak bisa dibagi 2 (untuk angka ganjil). Tipe data boolean bisa digunakan untuk menampung kondisi seperti ini, benar atau salah (`true` atau `false`).
<br><br>
Yang cukup menarik, atau mungkin agak “aneh”, bahasa pemrograman C tidak memiliki tipe data boolean bawaan. Operasi perbandingan yang seharusnya menghasilkan nilai boolean true atau false hanya menghasilkan integer 1 atau 0. Dalam bahasa C, nilai integer `1` dianggap sebagai `true` sedangkan `0` dianggap sebagai `false`.

``````` C
#include <stdio.h>

int main()
{
     int a = 1;
     printf("%d \n",a==1); // output 1
     printf("%d \n",a==2); // output 0
     return 0;
}
```````
Untuk tipe data `boolean` juga dapat menggunakan cara lain yaitu menambahkan file header `#include <stdbool.h>`, header ini tersedia untuk compiler **C99** ke atas. Bisa dibilang bahwa ini adalah cara “standar” untuk membuat tipe data boolean dalam bahasa C:
``````` C
#include <stdio.h>
#include <stdbool.h>

int main()
{
  bool a;
  a = false;

  if (a == true ) {
    printf("Ini bernilai true\n");
  }
  else {
    printf("Ini bernilai false\n");
  }
  return 0;
}

```````

# Aritmatika Dalam Bahasa Pemrograman 
Adalah operator yang digunakan untuk memproses operasi **Aritmatika**, beberapa contoh operasi matematika yang sering digunakan adalah penjumlahan, pengurangan, perkalian, dan pembagian

## Operator Aritmatika
#### Berikut adalah beberapa operator **aritmatika** <br/>
`+` **Addition** (Penjumlahan) untuk menjumlahkan dua angka atau lebih. <br/>
`-` **Subtraction** (Pengurangan) untuk mengurangi dua angka atau lebih. <br/>
`*` **Multiplication** (Perkalian) untuk proses perkalian. <br/>
`/` **Division** (Pembagian) untuk membagi bilangan. <br/>
`%` **Mod** (Modular) untuk mendapatkan sisa hasil bagi. <br/>
## Penggunaan Operasi
Operasi **Aritmatika** dapat digunakan secara langsung dengan memangil sebuah variabel
````C
int number; // variabel number belum memiliki nilai (null)
number = 1 + 1; 
printf("%d",number); // hasilnya adalah 2
 
number = 1 - 1;
printf("%d",number); // hasilnya adalah 0
````
selain itu operator juga bisa digunakan langsung saat melakukan output
````C
printf("%d",7*2); //output 14

printf("%d",7%2); //output 1
````

# Operator
Terdapat 2 jenis operator yaitu operator **relasional/logical** yang secara fungsi sama yaitu  untuk membandingkan dua buah nilai, hasil dari proses ini adalah True atau False.

## Operator Relasional
#### Contoh operator **Relasional** dalam bahasa C <br/>
`> ` **Grater than** (lebih dari). <br/>
`< ` **Less than** (kurang dari). <br/>
`>=` **Greater than or equal to** (lebih dari sama dengan). <br/>
`<=` **Less than or equal to** (kurang dari sama dengan). <br/>
`==` **Equal to** (sama dengan). <br/>
`!=` **Not equal to** (tidak sama dengan). <br/>
#### Operator Relasional dapat dioutputkan secara langsung
````C
printf("%d",1==2); //hasilnya adalah 0 atau false
````
#### Namun dapat juga diassigemnt terlebih dahulu dalam nilai boolean
````C
bool isEqual = (1>=2);
printf("%d",isEqual); //hasilnya false
````
#### Operator ini akan sangat dibutuhkan pada saat mengecek suatu kondisi pada percabangan if
````C
int x = 3;
int y = 5;
if(x>=y){   //Cek apa `x` >= `y` ?
  printf("true");  //jika ya, outputkan true;
}  //jika tidak, lanjut (skip)
````
Note : If akan dibahas lebih lanjut pada modul selanjutnya 

## Operator Logical
#### Contoh operator **Logical** dalam bahasa C <br/>
* `!` **NOT** (tidak benar) dengan menggunakan tanda `!` maka nilai yang sebenarnya true akan dibaca menjadi false, begitu pula sebaliknya. <br/>
* `&&` **AND** (dan) akan bernilai true apabila semua nilai bernilai true. Tetapi akan bernilai false jika salah satu/semua nilai bernilai false<br/>
````C
true && true = true
true && false = false
false && true = false
false && false = false
````
* `||` **OR** (or) akan bernilai true jika salah satu nilai bernilai true. Tetapi akan bernilai false jika semua nilai false  <br/>
````C
true || true = true 
true || false = true 
false || true = true 
false || false = false 
````
#### Operator **logical** biasanya digunakan untuk membandingakan hasil dari operator **relasional**
````C
int x = 2;
int y = 5;
printf("%d", (x<=y) && (x==2) );  //output true
/*
karena (x<=y) adalah true dan (x==2) juga true,
maka nilai AND keduanya adalah True
*/
````

Contoh Kasus
1. Buatlah sebuah program yang menginputkan nama dari driver gojek, jumlah penumpang per hari dalam kurun waktu 5 hari, lalu tampilkan nama, rata rata penumpang per hari, dan rata rata waktu kerja per hari (asumsikan tiap penumpang membutuhkan waktu 37 menit).
![image](https://user-images.githubusercontent.com/114791455/194764171-c5d023f5-73bb-40e8-9539-642339be4778.png)
<br>

Penyelesaian :

``````` C
#include <stdio.h>
#include <stdlib.h>
#define phi 3.14

int main()
{
    printf("+------------------------+\n");
    printf("| Volume dan Luas Tabung |\n");  // judul project
    printf("+------------------------+\n\n");

    float volume, luas;  // deklarasi variabel
    int r,t; 
    /* 
    Variabel r untuk jari-jari,
    variabel t untuk tinggi.
    */

    printf("masukkan jari jari tabung: ");
    scanf("%d",&r);  //inputan user
    printf("masukkan tinggi tabung: ");
    scanf("%d",&t);  //inputan user

    volume = phi * r * r * t;     // proses penghitungan
    luas = 2 * phi * r * (t+r);

    printf("volume tabung adalah %.2f \n",volume); // output volume dan luas permukaan
    printf("luas permukaan tabung adalah %.2f",luas);
    
    return 0;
}
```````

2. Buatlah program untuk menghitung volume dan luas tabung dari inputan user! (gunakan constanta phi)
![image](https://user-images.githubusercontent.com/114791455/194764835-b40cb315-ec5d-4489-975d-56b953447bdd.png)
<br>
penyelesaian : 

``````` C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("+------------------------------+\n");
    printf("| Program Penghitung Rata-rata |\n");  // judul project
    printf("+------------------------------+\n\n");

    int h_kerja, penumpang, rata2;
    const int waktu = 37; // waktu per penumpang
        
    printf("masukkan banyak hari kerja : ");
    scanf("%d",&h_kerja);  //inputan user
    printf("masukkan banyak penumpang : ");
    scanf("%d",&penumpang);  //inputan user

    rata2 = penumpang / h_kerja; //menghitung rata rata penumpang

    printf("Rata rata penumpang dalam sehari sejumlah %d orang\n", rata2);

    int jmlh = penumpang*waktu;
    
    int jam = jmlh / 60;
    int menit = jmlh % 60;

    printf("Jam kerja yang telah dilakukan adalah : \n");   
    printf("%d jam\n%d menit\n", jam, menit);   

    return 0;
}

```````