# Daftar Isi
* Definisi Percabangan
* Percabangan dalam Bahasa C
  - Percabangan 'If'
  - Percabangan 'If-Else'
  - Percabangan 'If-Else If-Else'
  - Percabangan 'Switch-Case'
  - Percabangan Bersarang (_Nested Conditional_)

# Definisi Percabangan
Percabangan merupakan salah satu _control flow_ (selain percabangan, ada juga perulangan), yaitu cara kita mengatur jalannya perintah dan pemanggilan fungsi dalam suatu program. Dengan menggunakan percabangan, maka program dapat menjadi lebih 'pintar' karena dapat membuat keputusan berdasarkan kondisi yang diberikan. Agar dapat lebih mudah dipahami, berikut adalah contoh percabangan di dunia nyata:

````````
Jika (nilai siswa lebih dari 80), maka [siswa lulus].
Jika (nilai siswa lebih dari 70 dan kurang dari atau sama dengan 80), maka [siswa perlu remed].
Selain itu, [siswa tidak lulus].
````````

Kata-kata di dalam tanda kurung (...) menandakan kondisi yang harus dipenuhi agar perintah dalam tanda kurung siku [...] dapat dieksekusi. Dalam notasi _flowchart_, percabangan di atas dapat digambarkan seperti di bawah ini:

![Blank diagram](https://user-images.githubusercontent.com/96810584/196404482-875da77c-a62e-434f-9bab-05900ed9f3ee.png)

# Percabangan dalam Bahasa C

Dalam bahasa C, percabangan dapat dituliskan menggunakan syntax utama `if`, `If-Else If-Else`, `else`, dan `switch-case`. Untuk ketiga opsi pertama, formatnya adalah sebagai berikut:

```````c
if(condition1){
    statement1;
}else if(condition2){
    statement2;
}else if(condition3){
    statement3;
}else{
    statement4;
}
```````
Penulisan format percabangan di atas memiliki syarat-syarat berikut:
1. Kondisi berupa ekspresi boolean.
2. Penulisan kondisi diapit oleh tanda kurung `(...)`.
3. Statement-statement yang akan dieksekusi oleh suatu kondisi harus berada di dalam tanda kurung kurawal `{...}`.
4. Setiap baris statement di dalam percabangan harus diakhiri dengan tanda semicolon `;`.

Format dari `switch-case` akan ditunjukan setelah sub-bab `if-else if-else`.

## Percabangan 'If'
**Percabangan 'If'** merupakan _single alternative selection_, karena hanya memiliki satu pilihan keputusan. Perhatikan contoh berikut:

````````C
int nilai;
printf("Masukkan Nilai : ");
scanf("%d",&nilai);

if (nilai > 80){
    printf("Predikat A");
}
printf("Program telah selesai dijalankan");
````````

Perhatikan bahwa dari contoh di atas, maka dapat disimpulkan bahwa cara kerja dari percabangan `if` adalah sebagai berikut:
* Jika kondisi pada `if` bernilai `True`, maka perintah di dalamnya **akan dieksekusi**.
* Jika kondisi pada `if` bernilai `False`, maka perintah di dalamnya **tidak akan dieksekusi**. 

## Percabangan 'If-Else'

**Percabangan 'If-Else'** merupakan _dual alternative selection_, karena memiliki dua pilihan keputusan. Perhatikan contoh berikut:

`````````C
int nilai;
printf("Masukkan Nilai : ");
scanf("%d",&nilai);

if (nilai > 80){
    printf("Predikat A");
else{
    printf("Predikat Bukan A");
}
printf("Program telah selesai dijalankan");
`````````

Dari contoh di atas, bisa disimpulkan bahwa cara kerja dari percabangan 'If-Else' adalah sebagai berikut:
* Jika kondisi pada `if` bernilai `True`, maka **perintah di dalam `if` tersebut akan dieksekusi**.
* Jika kondisi pada `if` bernilai `false`, maka **perintah di dalam `else` akan dieksekusi**.

Dengan kata lain, kondisi `else` memeriksa kondisi selain dari kondisi `if`. Apabila kondisi di dalam `if` adalah `nilai > 80`, maka kondisi di dalam `else` secara otomatis akan menjadi `nilai <= 80`. Contoh lain untuk menggambarkan kondisi `else` adalah sebagai berikut:

`````````C
int nilai;
printf("Masukkan Nilai : ");
scanf("%d",&nilai);

if (nilai > 80 && nilai <= 100){
    printf("Predikat A");
}else{
    printf("Predikat Bukan A");
}
printf("Program telah selesai dijalankan");
`````````
Dari contoh di atas, maka kondisi di dalam `else` secara otomatis akan menjadi `nilai <= 80 || nilai > 100`.

## Percabangan 'If-Else If-Else'

**Percabangan 'If-Else If-Else'** merupakan _multiple alternative selection_, karena memiliki lebih dari dua pilihan keputusan. 

`````````C
int nilai;
printf("Masukkan Nilai : ");
scanf("%d",&nilai);

if (nilai > 80 && nilai <= 100){
    printf("Predikat A");
}else if (nilai > 70 && nilai <= 80){
    printf("Predikat B");
}else if (nilai > 60 && nilai <= 7){
    printf("Predikat C");
}else if (nilai > 50 && nilai <= 60){
    printf("Predikat D");
}else if (nilai >= 0 and nilai <= 50){
    printf("Predikat E");
}else{
    printf("Nilai tidak valid");
}
printf("Program telah selesai dijalankan");
`````````
Dari program di atas, dapat disimpulkan bahwa cara kerja percabangan 'If-Else If-Else' adalah sebagai berikut:
* Jika kondisi pada `if` bernilai `True`, maka **perintah di dalam `if` tersebut akan dieksekusi**.
* Jika kondisi pada `if` bernilai `False`, maka **kondisi dalam `else if` akan diperiksa**.
* Jika kondisi dalam `else if` bernilai `True`, maka perintah di dalamnya akan dieksekusi. Apabila bernilai `False`, maka _sequence_ selanjutnya akan dijalankan (apabila sequence selanjutnya adalah `else if` juga, maka ulangi langkah yang sama untuk `else if` tersebut).
* Apabila statement `else` ditambahkan di akhir, maka perintah di dalamnya akan dieksekusi ketika semua kondisi di dalam `if` dan `else if` sudah diperiksa dan semuanya bernilai `False`.

## Percabangan 'Switch-Case'

Selain percabangan `if` dan kawan-kawannya, percabangan juga dapat dilakukan dengan `switch`. Perbedaannya, `switch` menguji apakah sebuah variabel tunggal (_ekspresi_) yang bertipe data `int` atau `char` memiliki kecocokan dengan kasus ekspresi-konstan di setiap blok `case`. Setelah itu, perintah akan dijalankan sesuai dengan blok `case` mana yang nilai ekspresi-konstannya cocok dengan nilai variabel tunggal (_ekspresi_). Untuk lebih jelasnya, berikut adalah format dari percabangan `switch-case`:

```````c
switch(ekspresi){
    case ekspresi-konstan1:
        statement1;
        break;
    case ekspresi-konstan2:
        statement2;
        break;
    default:
        statement;
}
```````

Pada format di atas, ada statement baru yang muncul, yaitu `break` dan `default`. Aturan penggunaan dari statement tersebut adalah sebagai berikut:
1. Statement `break` harus ditambahkan di akhir setiap blok case untuk memberi tanda bahwa blok case tersebut sudah berakhir.
2. Statement `default` bersifat opsional. Apabila `default` ada, maka perintah yang ada di dalamnya akan dijalankan apabila semua `case` di atasnya tidak cocok.

Berikut adalah contoh penggunaan dari percabangan `switch-case`:

```````c
char predikatMahasiswa;
printf("Masukkan predikat mahasiswa: ");
scanf("%c", &predikatMahasiswa);

switch(predikatMahasiswa){
    case 'A':
        printf("Sangat Baik\n");
        break;
    case 'B':
        printf("Baik\n");
        break;
    case 'C':
        printf("Cukup\n");
        break;
    case 'D':
        printf("Kurang\n");
        break;
    case 'E':
        printf("Sangat Kurang\n");
        break;
    default:
        printf("Predikat Tidak Valid\n");
}
```````

Pada contoh di atas, ekspresi yang digunakan adalah `predikatMahasiswa` dengan case-casenya adalah character `A`, `B`, `C`, `D`, dan `E`. Apabila tidak ada case yang cocok, maka perintah dalam blok `default` akan dijalankan.

## Percabangan Bersarang (_Nested Conditional_)

**Percabangan bersarang** (_nested conditional_) adalah kasus ketika ada percabangan di dalam suatu percabangan. Kasus ini akan terjadi apabila terdapat percabangan lain di dalam perintah dari suatu percabangan. Agar lebih jelas, perhatikan kode program di bawah ini:

````````C
int nilai;
printf("Masukkan Nilai : ");
scanf("%d",&nilai);

if (nilai > 80 && nilai <= 100) {
    printf("Predikat A");
    if (nilai == 100) {
        printf("Selamat! Mahasiswa mendapatkan nilai sempurna!");
    } else if (nilai == 99) {
        printf("Selamat! Nilai mahasiswa nyaris sempurna!");
    } else{
        printf("Selamat!");
    }
} else if (nilai > 70 && nilai <= 80) {
    printf("Predikat B");
} else if (nilai > 60 && nilai <= 70) {
    printf("Predikat C");
} else if (nilai > 50 && nilai <= 60) {
    printf("Predikat D");
} else if (nilai >= 0 && nilai <= 50) {
    printf("Predikat E");
} else {
    printf("Nilai tidak valid");
}
printf("Program telah selesai dijalankan");
````````

Cara kerja percabangan bersarang (_nested conditional_) tetap sama dengan semua jenis percabangan yang telah dijelaskan sebelumnya. Perbedaannya hanya terletak pada tempatnya yang berada di dalam percabangan lain.
