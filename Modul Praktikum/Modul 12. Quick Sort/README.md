# Pengenalan Quick Sort
Quick sort merupakan salah satu jenis algoritma sorting dalam kelompok `comparasion sort` atau melakukan perbandingan nilai dua element untuk menentukkan posisi yang tepat dari element tersebut. Selain itu algoritma quick sort juga termasuk ke dalam `Devide & Conquer Algorithm` yaitu algoritma yang menyelesaikan suatu permasalahan dengan cara membagi permasalahan tersebut menjadi bagian-bagian yang lebih kecil dan menyelesaikannya per bagian kemudian digabung menjadi satu. Dalam melakukan quick sort terdapat implementasi `recursive` di dalamnya, sehingga diperlukan pemahaman `recursive` untuk melakukan Quick Sort

# Pengenalan Recursive
Recursive merupakan suatu kondisi dimana sebuah fungsi memanggil dirinya sendiri. Dengan kondisi tersebut, maka pemanggilan fungsi akan terlihat seperti sebuah `looping` karena suatu fungsi akan melakukan statement yang terdapat di dirinya sendiri secara berulang kali. Karena nampak seperti looping, maka dibutuhkan sebuah kondisi untuk menghentikan perulangan tersebut yang mana disebut dengan `base case`. Jika sebuah fungsi menemukan `base case` maka recursive akan berhenti.

Untuk melakukan recursive maka dapat dituliskan sebagai berikut : 
``````C
#include <stdio.h>

void recursive(int x) {
  printf("%d ", x);
  if (x >= 0) recursive(x - 1);
  return;
}

int factorial(int n) {
  if (n > 0) return n * factorial(n - 1);
  else return 1;
}

int main(int argc, char *argv[]){
  int result = factorial(5);
  printf("RESULT: %d\n", result);

  return 0;
}

``````
Output : 
``````
10 9 8 7 6 5 4 3 2 1 0
``````

Untuk lebih memahami recursive maka akan lebih mudah jika divisualisasikan melalui struktur data stack, hal tersebut dikarenakan recursive merupakan salah satu implementasi dari sruktur data stack. Visualisasi struktur data stack pada recursive dapat dilihat pada gambar di bawah ini :

![image](https://user-images.githubusercontent.com/94579033/211184617-93a2ac29-bcc1-4855-b39e-e4eb7c23cd44.png)

Pada gambar kotak di atas merupakan kondisi ketika fungsi memanggil dirinya sendiri dan gambar kotak di bawah merupakan kondisi ketika base case telah ditemukan dan fungsi mulai melakukan return value.

# Quick Sort Algorithm
Pemahaman recursive akan mempermudah kita dalam melakukan implementasi algoritma quick sort. Jika pada algoritma-algoritma sorting sebelumnya dilakukan comparasion sebuah nilai dengan nilai setelahnya, maka pada Quick Sort akan sedikit berbeda. Pada Quick Sort dipilih sebuah nilai yang disebut `pivot` yang akan dijadikan patokan pengurutan dan dijadikan nilai pembanding. Nilai pivot ini diambil dari salah satu nilai dalam sebuah baris nilai yang akan diurutkan, dapat diambil dari nilai awal baris, tengah baris, atau akhir baris. Namun, setiap letak nilai yang diambil memiliki algoritma yang berbeda-beda, sehingga algoritma quick sort untuk nilai pivot tengah akan berbeda dengan  ketika mengambil nilai pivot awal.

![image](https://user-images.githubusercontent.com/94579033/211184924-13aa1cc6-fabd-4cf0-ae0e-60856d86a04a.png)

Selain itu telah dijelaskan di awal bahwa Quick Sort merupakan devide & conquare algorithm yang mana dapat dilihat pada gambar di atas algotitma quick sort melakukan pemecahan partisi atau baris data yang kemudian tiap-tiap pecahan baris data tersebut dilakukan sorting menggunakan algoritma quick sort kembali. Pemecahan tersebut dilakukan secara berulang-ulang hingga semua data dipastikan urut.

Visualisasi dari berjalannya algoritma quick sort dapat dilihat pada gambar di bawah ini : 

![](https://www.tutorialspoint.com/data_structures_algorithms/images/quick_sort_partition_animation.gif)

Jika dilihat pada visualisasi di atas dapat diperhatikan bahwa bahwa algoritma quick sort melakukan pengurutan sebagai berikut :
1. Menentukkan nilai pivot
2. Mencari nilai yang lebih besar dari pivot dari baris awal - akhir
3. Mencari nilai yang lebih kecil dari pivot dari baris akhir - awal
4. Melakukan penukaran nilai yang lebih besar dengan nilai yang lebih kecil dari pivot
5. Jika pencarian nilai lebih kecil dan nilai yang lebih besar bertemu maka yang dilakukan adalah menukar lokasi terakhir pencarian nilai yang lebih kecil dengan nilai pivot
6. Membagi baris tersebut menajadi 2 partisi dengan pembagian index pivot - 1 dan index pivot + 1
7. Kembali ke nomor 1 dan berhenti ketika semua data telah tersorting

**WARNING!!!! algoritma di atas hanya berlaku ketika kita memilih pivot pada index awal dan index akhir**

Berikut merupakan kode program quick sort dengan pivot pada index akhir : 
``````C
#include <stdio.h>

void print_arr(int *arr, int size) {
  for(int i = 0; i < size; i++) {
    printf("%d ", *(arr + i));
  }

  printf("\n");
}

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

void quick_sort(int *arr, int x, int y) {
  int start, end, pivot;

  start = x;
  end = y;
  pivot = end;

  if (start > end) return;

  while (start < end) {
    while(arr[start] <= arr[pivot]) start++;
    while(arr[end] > arr[pivot]) end--;

    if(start < end) swap(&arr[start], &arr[end]);
  }

  swap(&arr[pivot], &arr[end]);

  quick_sort(arr, x, end - 1);
  quick_sort(arr, end + 1, y);
}

int main(int argc, char *argv[]){
  int arr[] = {3, 5, 1, 4, 2, 6, 10, 7, 9, 8};
  int size = sizeof(arr)/sizeof(int);

  printf("Array before sorted:\n");
  print_arr(arr, size);
 
  quick_sort(arr, 0, size - 1);
  
  printf("Array setelah sorted:\n");
  print_arr(arr, size);

  return 0;
}
``````
Output : 
``````
ARRAY SEBELUM SORTING : 3 5 1 4 2 6 10 7 9 8  
ARRAY SESUDAH SORTING : 1 2 3 4 5 6 7 8 9 10 
``````

# Latihan Soal

Buatlah algoritma untuk mencari nilai tertinggi dari suatu array berukuran $N$ dengan memanfaatkan algoritma *quick sort*. Setelah itu, buatlah juga algoritma yang memanfaatkan algoritma *linear search* (*binary search* jika memungkinkan) untuk menyelesaikan persoalan yang sama. Kedua algoritma tersebut wajib dibuat dalam dua fungsi/prosedur yang berbeda. Selain itu, dilarang mengakali algoritma dengan memodifikasi fungsi `main` (kecuali input dan output). Terakhir, presentasikan program dan tentukan algoritma mana yang lebih efisien serta mengapa algoritma yang satu lebih efisien daripada algoritma lainnya dengan argumenmu sendiri.

Note: algoritma yang ditulis dalam fungsi/prosedur tidak boleh mengubah nilai dan urutan dari array yang berada di fungsi `main`.

### Input Format

Baris pertama berisi bilangan bulat $N$, dilanjutkan dengan sebanyak $N$-baris berisi bilangan bulat yang merupakan elemen-elemen dari array.

### Output Format

Terdiri dari satu baris saja, yaitu nilai tertinggi yang terdapat dalam array.

### Sample Input

```
10
4
3
5
9
2
8
7
3
4
6
```

### Sample Output

```
9
```
