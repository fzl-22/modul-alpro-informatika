# Pengertian Insertion Sort
Insertion sort merupakan salah satu jenis dari algoritma sorting yang masuk ke dalam comparasion sort atau algoritma yang melakukan perbandingan antar elemen guna menentukkan urutan yang sesuai dari sebuah data. Seperti algoritma sorting sebelumnya yaitu `Bubble Sort` dan `Selection Sort`, algoritma insertion sort memiliki kompleksitas yang sama dengan kedua algoritma tersebut yaitu `O(n^2)` untuk kondisi rata-ratanya. Algoritma ini juga dapat digunakan untuk mengurutkan sebuah data secara Ascending maupun Descending. 

Cara  kerja Insertion Sort sangatlah sederhana yaitu membandingkan sebuah elemen dengan elemen sebelumnya. Untuk ascending maka sebuah elemen akan dibandingkan apakah elemen tersebut lebih kecil dari elemen sebelumnya, jika iya maka penukaran element terjadi. 

Cara kerja algoritma `Insertion Sort` dapat dilihat pada gambar di bawah ini : 

![](https://upload.wikimedia.org/wikipedia/commons/9/9c/Insertion-sort-example.gif)

![](https://miro.medium.com/max/765/0*1zi2XtjiLXa3LYZh.PNG)

Berikut merupakan kode program dari selection sort : 
``````C
#include <stdio.h>

void InsertionSort(int angka[], int panjang)
{
    for (int a = 1; a < panjang; a++)
    {
        int key = angka[a];
        int b = a - 1;
        while (b >= 0 && angka[b] > key)
        {
            angka[b + 1] = angka[b];
            b = b - 1;
        }
        angka[b + 1] = key;
    }
}

void show(int angka[], int panjang)
{
    for (int a = 0; a < panjang; a++)
    {
        printf("%d ", angka[a]);
    }
}

int main()
{
    int angka[] = {10, 5, 3, 1, 2, 9, 7, 4, 6};
    
    int panjang = sizeof(angka) / sizeof(int);
    InsertionSort(angka,panjang);
    show(angka,panjang);
}
``````
Output : 
``````
1 2 3 4 5 6 7 8 9 10
``````
Versi lain dari algoritma `Insertion Sort` adalah sebagai berikut : 
``````C
void InsertionSort(int angka[], int panjang)
{
    for (int a = 1; a < panjang; a++)
    {
        if (angka[a] < angka[a - 1])
        {
            int b = a;
            while (angka[b] < angka[b - 1] && b > 0)
            {
                int tmp = angka[b];
                angka[b] = angka[b - 1];
                angka[b - 1] = tmp;
                b--;
            }
        }
    }
}

void show(int angka[], int panjang)
{
    for (int a = 0; a < panjang; a++)
    {
        printf("%d ", angka[a]);
    }
}

int main()
{
    int angka[] = {10, 5, 3, 1, 2, 9, 7, 4, 6};
    int panjang = sizeof(angka) / sizeof(int);
    InsertionSort(angka, panjang);
    show(angka, panjang);
}
``````
Output : 
``````
1 2 3 4 5 6 7 8 9 10
``````
Karena `Insertion Sort` adalah sebuah algoritma, maka insertion sort dapat memiliki berbagai jenis versi kode program. 

# Soal Latihan
Bocchi adalah seorang siswa SMA introvert yang sedang menikmati liburan musim panasnya dirumah. Suatu hari karena bosan di rumah, Bocchi memilih untuk tidur namun tidak bisa, ia ingat suatu metode untuk tidur dengan menghitung sebuah baris angka. Namun, Bocchi bingung untuk menghitung baris angka dari kecil ke besar atau besar ke kecil. Untuk itu, Bocchi memilih mengkombinasikan keduanya. Bantu Bocchi untuk membuat sebuah baris angka yang mengkombinasikan kedua urutan baris angka tersebut dengan menggunakan insertion sort, sehingga Bocchi dapat tidur dengan nyenyak.

Input merupakan sebuah baris array yang terdiri dari angka seperti di bawah ini :  
``````
1 9 4 5 6 7 2 3 8 1 9 4 5 6 7 2 3 8
``````
Output : 
``````
Baris 1 : 1 1 2 2 3 3 4 4 5 5 9 9 8 8 7 7 6 6
Baris 2 : 1 9 2 8 3 7 4 6 5 5 6 4 7 3 8 2 9 1 
``````