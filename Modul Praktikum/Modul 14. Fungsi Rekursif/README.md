# Fungsi Rekursif

Fungsi rekursif adalah fungsi yang memanggil dirinya sendiri. Masih bingung? Mari kita pahami maksud dari rekursi (*recursion*) terlebih dahulu, baik secara intuitif maupun teknikal.

## 1. Konsep Rekursi: Recursive Case dan Base Case

Perhatikan gambar boneka lucu di bawah ini:

![image](https://github.com/fzl-22/ALPRO-SainsData-ITTelkomSurabaya/blob/master/images/russian%20dolls%20cropped%20for%20RR10.jpg)

Gambar di atas adalah gambar boneka Matryoshka dari Russia. Apabila boneka di paling kiri (boneka paling besar) dibuka, maka akan muncul boneka lain yang bentuknya sama namun berbeda ukuran, yaitu boneka kedua dari kiri. Jika boneka kedua dari kiri dibuka, maka akan muncul boneka ketiga dari kiri. Proses ini dapat berjalan hingga muncul boneka terakhir, yaitu boneka terkecil yang sudah tidak memiliki 'anak' lagi.

Proses pada boneka Matryoshka ini sangat cocok untuk menggambarkan dua konsep utama dalam rekursi, yaitu **recursive case** dan **base case**.

- **Recursive Case** adalah kondisi yang dituliskan pada fungsi rekursif agar memanggil dirinya sendiri. Proses ini berjalan terus hingga mencapai *base case*.
- **Base Case** adalah kondisi yang dituliskan pada fungsi rekursif untuk menghentikan pemanggilan dirinya sendiri. Jika tidak ada, maka akan berjalan terus dan menghabiskan memory. Kondisi ini juga kadang-kadang disebut *terminating case* karena berguna untuk men-*terminasi* proses pemanggilan fungsi itu sendiri.

Dengan studi kasus boneka Matryoshka tersebut, kita bisa buat fungsi untuk membuka boneka Matryoshka dengan pseudocode sederhana seperti berikut:

```
FUNCTION bukaBoneka(BonekaMatryoshka):
	IF pembukaBoneka IS IN bonekaMatryoshka, THEN
		RETURN bukaBoneka(BonekaMatryoshka)
	ELSE, THEN
		RETURN BonekaMatryoshka
	END IF
END FUNCTION
```
## 2. Recursive Dalam Struktur Data Stack

Untuk lebih memahami recursive maka akan lebih mudah jika divisualisasikan melalui struktur data stack, hal tersebut dikarenakan recursive merupakan salah satu implementasi dari sruktur data stack. Visualisasi struktur data stack pada recursive dapat dilihat pada gambar di bawah ini :

![image](https://user-images.githubusercontent.com/94579033/211184617-93a2ac29-bcc1-4855-b39e-e4eb7c23cd44.png)

Pada gambar kotak di atas merupakan kondisi ketika fungsi memanggil dirinya sendiri dan gambar kotak di bawah merupakan kondisi ketika base case telah ditemukan dan fungsi mulai melakukan return value.

## 3. Studi Kasus Fungsi Perpangkatan

Sebagai contoh, kita akan membuat fungsi rekursif untuk menghitung pangkat dari suatu bilangan bulat. Definisikan fungsi $power(a, n)$ adalah perpangkatan bilangan $a$ terhadap $n$. Atau dengan definisi lain, dinyatakan bahwa $power(a, n)$ adalah perkalian berulang bilangan $a$ sebanyak $n$-kali. Sehingga, dapat dituliskan sebagai berikut:

![image](https://github.com/fzl-22/ALPRO-SainsData-ITTelkomSurabaya/blob/master/images/power%20function%20equation.png)

Hal tersebut bisa kita buktikan dengan observasi sederhana seperti berikut:
$$power(5,4)=5^4=5\times 5^3=5\times 5\times 5^2=5\times 5\times 5\times 5^1=5\times 5\times 5\times 5\times 5^0=5\times 5\times 5\times 5\times 1$$
Perhatikan bahwa:
- Fungsi $power(a, n)$ akan terus memanggil dirinya sendiri selama $n>0$ (**recursive case**)
- Fungsi $power(a,n)$ akan berhenti memanggil dirinya sendiri saat $n=0$ (**base case**)

Dengan observasi di atas, maka dapat dituliskan kode program fungsi $power(a, n)$ sebagai berikut:

`````C
#include <stdio.h>

int power(int a, int n){
    if(n > 0)       // recursive case
        return a*power(a, n - 1);
    else            // base case
        return 1;
}

int main(){
    int basis, pangkat;
    printf("Masukkan bilangan basis: ");
    scanf("%d", &basis);

    printf("Masukkan bilangan pangkat: ");
    scanf("%d", &pangkat);

    int result = power(basis, pangkat);
    
    printf("Hasil dari %d^%d adalah %d", basis, pangkat, result);
    return 0;
}
`````

## Latihan Soal


1. Buatlah sebuah fungsi `multiply(x, n)` yang mengembalikan nilai hasil dari `x` dikalikan dengan `n` dengan menggunakan rekursi, dengan `x` dan `n` adalah bilangan non-negatif.

   Sample Input
   ``````
   5 
   2
   ``````
   Sample Ouput
   ``````
   10
   ``````

2. Buatlah sebuah fungsi recursive `ascending(n)` yang melakukan output angka ascending dari 1 hingga n.

   Sample Input 
   ``````
   5
   ``````
   Sample Output
   ``````
   1 2 3 4 5
   `````` 
