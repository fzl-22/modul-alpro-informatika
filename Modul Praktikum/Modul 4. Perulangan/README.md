# Daftar Isi
* Definisi Perulangan (Looping)
* Perulangan dalam Bahasa C
  - Perulangan 'For'
  - Perulangan 'While'
  - Perulangan 'Do-While'
  - Perulangan Bersarang 'Nested Loop'

# Definisi Perulangan
Perulangan (Looping) merupakan salah satu _control flow_ yang memiliki cara kerja menjalankan suatu block program yang sama secara berulang hingga menemukan suatu kondisi yang membuat perulangan tersebut berhenti. Suatu perulangan (Looping) akan mengulang program dengan suatu parameter kondisi yang menghasilkan nilai `true` dan akan langsung berhenti jika parameter kondisi tersebut mengasilkan nilai `false`

# Perulangan dalam Bahasa C
Dalam bahasa C, terdapat beberapa jenis perulangan. Namun, pada modul ini akan dijelaskan mengenai perulangan jenis `for`, `while`, `do-while`, dan `nested-loop`.

# Perulangan For
Perulangan `for` merupakan perulangan yang mengharuskan developer untuk mendeklarasikan keseluruhan parameter yang dibutuhkan untuk melakukan perulangan di awal. Terdapat 3 parameter yang dibutuhkan untuk melakukan perulangan pada `for` yang dituliskan dalam tanda (....). Adapun ketiga parameter tersebut dapat dilihat pada kode program di bawah ini.
```````c
for(int a = 0; a < 10; a++){}
```````

- `int a = 0` merupakan `initial condition` yang menunjukkan awal/_start_ dari perulangan.
- `a < 10` merupakan `looping condition` yang harus dipenuhi dengan menghasilkan nilai true sebagai syarat berlangsungnya perulangan tersebut.
- `a++` merupakan `step` yang akan melakukan perubahan nilai terhadap variabel a. Perubahan dapat dilakukan menggunakan operasi `assigment` seperti `increment` atau `decrement`.

Adapun sytax keseluruhan untuk perulangan for adalah sebagai berikut
```````c
for(initial condition; looping condition; step){
   statement;
}
```````
Berikut merupakan contoh dari program perulangan for : 
```````c
for(int a = 0; a < 10; a++){
    printf("ini angka : %d",a);
    puts("");
}
```````
Jika kita uraikan program di atas, maka deskripsi dari program di atas adalah sebagai berikut : 
- _Jalankan perulangan dari nilai variabel a bernilai 0_ `int a = 0` _hingga nilai variabel a bernilai kurang dari 10_ `a < 10`, _dengan variabel a melakukan penambahan nilai sejumlah 1 setiap perulangannya_ `a++` _dan pada setiap perulangan, tampilkan output_ `ini angka : a` _dengan nilai a mengikuti nilai variabel a pada saat itu_.

# Perulangan While
Perulangan while atau _while loop_ merupakan perulangan yang hanya membutuhkan satu parameter saja untuk menjalankannya. Parameter tersebut merupakan suatu kondisi yang harus menghasilkan nilai keluaran bernilai `true` agar perulangan tersebut dapat terus berjalan yang dituliskan pada (....). Berikut merupakan sytax dari _while loop_
```````c
while(kondisi){ // perulangan while akan dilakukan ketika kondisi di dalam tanda kurung bernilai true
      statement;
}
```````
Perulangan while tersebut akan terus berlangsung hingga kondisi di dalam tanda (....) menghasilkan nilai false. Untuk itu, diperlukan suatu kode program yang membuat kondisi while menghasilkan nilai `false`. Contoh kode program untuk menghentikan perulangan while dapat dilihan pada kode program berikut : 
``````c
int a = 0;
while(a < 10){
     printf("ini adalah angka : %d\n", a);
     a++;
}
``````
increment pada variabel a akan melakukan penambahan sejumlah 1 pada variabel a, hal tersebut akan membuat nilai dari variabel a terus bertambah, karena pertambahan tersebutlah nantinya nilai variabel a akan berada pada nilai 9 yang merupakan nilai terakhir dari < 10. Ketika variabel a memiliki nilai 10, maka kondisi di dalam while yaitu `a < 10` akan menghasilkan nilai `false` karena a tidak lagi < 10. Hasil `false` tersebutlah yang membuat perulangan while terhenti.

# Perulangan Do-While
Perulangan `do-while` merupakan perulangan yang memiliki konsep kerja hampir mirip dengan perulangan `while`. Perbedaan yang membedakan antara keduanya adalah pada perulangan `do-while` statement di dalam perulangan tersebut akan di jalankan terlebih dahulu terlepas dari hasil kondisi pada `do-while`. Berikut merupakan sytax dari perulangan `do-while` : 
```````c
do{
   statement;
}while(kondisi);
```````
Berikut merupakan contoh dari looping `do-while` : 
``````c
int a = 0;
do {
  printf("ini adalah angka : %d\n", a);
  a++;
}while(a < 10);
``````
Perulangan di atas akan dijalankan terlepas dari kondisi a menghasilkan `true` atau `false` pada awal perulangan. Agar lebih jelas mari perhatikan kode program berikut : 
``````c
int a = 10;
do{
  printf("ini adalah angka : %d\n",a);
}while(a < 10);
`````` 
# Perulangan Bersarang/Nested Loop
Perulangan bersarang atau _nested loop_ merupakan kondisi dimana sebuah perulangan memiliki perulangan lain sebeagai statementnya atau sebuah perulangan menjadi statement dari sebuah perulangan lain. Contoh penulisan dari nested loop adalah sebagai berikut : 
``````c
for(int a = 0; a < 10; a++) {
   for(int b = 0; b < 10; b++) {
      printf("ini adalah angka : %d\n", b);
   }
   printf("ini adalah angka : %d\n", a);
}
``````
Pada perulangan bersarang, perulangan yang dijalankan terlebih dahulu adalah perulangan yang terdapat di dalam perulangan lain. Contoh pada kode program di atas, perulangan dengan variabel parameter b dijalankan hingga selesai terlebih dahulu dan kemudian dilanjutkan dengan perulangan terluar. Perulangan b juga dilakukan sebanyak perulangan a. Contoh pada program di atas, perulangan b akan dilakukan sebanyak 10 kali dengan perulangan b melakukan perulangan sebanyak 10 kali juga. Sehingga, perulangan b melakukan 100 kali perulangan. 