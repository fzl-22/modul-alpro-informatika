# Sorting
Sorting Merupakan suatu proses untuk mengatur dimana posisi suatu data seharusnya atau dapat didefinisikan sebagai proses mengurutkan data berdasarkan nilai tertentu. Sorting dapat dilakukan dari nilai terkecil ke nilai terbesar ataupun sebaliknya. Sorting dapat dibedakan menjadi dua yaitu Comparasion Sort (Bubble sort, Selection Sort, Insertion Sort, Merge Sort, Quick Sort) dan Non-Comparasion Sort (Radix Sort, Counting Sort). Comparasion Sort / pengurutan dengan perbandingan adalah algoritma yang dalam proses pengurutannya melakukan perbandingan antar data. Non-Comparasion Sort / pengurutan tanpa perbandingan adalah algoritma pengurutan dimana dalam prosesnya tidak melakukan perbandingan antar data. Pada mata kuliah Algoritma dan Pemograman ini akan mempelajari mengenai Comparasion Sort
# Bubble Sort
## Pengertian Bubble Sort
Algoritma Bubble Sort Merupakan salah satu bentuk pengurutan yang menerapkan pertukaran data atau nilai pada prosesnya. Proses pertukaran data / nilai tersebut dilakukan dengan menukarkan dua data atau nilai yang berdekatan apabila urutan nilainya salah. Algoritma ini dapat mengurutkan nilai dari nilai yang paling besar ke nilai yang paling kecil atau biasanya disebut Descending dan juga dapat mengurutkan nilai dari nilai terkecil ke nilai yang besar atau disebut Ascending. Jadi Algoritma bubble sort adalah proses pengurutan yang secara bertahap memindahkan data ke lokasi yang benar. Oleh karena itu, algoritma ini disebut “Bubble” atau dalam bahasa Indonesia disebut gelembung.

## Ilustrasi Bubble Sort
![](https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif?20131109191607)
<br>
Gimana ? Apa kalian sudah paham dengan Ilustrasi diatas? Apabila belum bisa memahaminya, mari kita bedah satu persatu iterasi atau proses berjalannya ilustrasi diatas. <br>
Kita Punya data [6,5,3,1,8,7,2,4] dan kita akan mengurutkan dengan metode Ascending

Iterasi 1: <br>
5, 6, 3, 1, 8, 7, 2, 4 → Terjadi Pertukaran <br>
5, 3, 6, 1, 8, 7, 2, 4 → Terjadi Pertukaran <br>
5, 3, 1, 6, 8, 7, 2, 4 → Terjadi Pertukaran <br>
5, 3, 1, 6, 8, 7, 2, 4 → Tidak Terjadi Pertukaran <br>
5, 3, 1, 6, 7, 8, 2, 4 → Terjadi Pertukaran <br>
5, 3, 1, 6, 7, 2, 8, 4 → Terjadi Pertukaran <br>
5, 3, 1, 6, 7, 2, 4, 8 → Terjadi Pertukaran <br>

Iterasi 2: <br>
3, 5, 1, 6, 7, 2, 4, 8 → Terjadi Pertukaran <br>
3, 1, 5, 6, 7, 2, 4, 8 → Terjadi Pertukaran <br>
3, 1, 5, 6, 7, 2, 4, 8 → Tidak Terjadi Pertukaran <br>
3, 1, 5, 6, 7, 2, 4, 8 → Tidak Terjadi Pertukaran <br>
3, 1, 5, 6, 2, 7, 4, 8 → Terjadi Pertukaran <br>
3, 1, 5, 6, 2, 4, 7, 8 → Terjadi Pertukaran <br>

Iterasi 3: <br>
1, 3, 5, 6, 2, 4, 7, 8 → Terjadi Pertukaran <br>
1, 3, 5, 6, 2, 4, 7, 8 → Tidak Terjadi Pertukaran <br>
1, 3, 5, 6, 2, 4, 7, 8 → Tidak Terjadi Pertukaran <br>
1, 3, 5, 2, 6, 4, 7, 8 → Terjadi Pertukaran <br>
1, 3, 5, 2, 4, 6, 7, 8 → Terjadi Pertukaran <br>

Iterasi 4: <br>
1, 3, 5, 2, 4, 6, 7, 8 → Tidak Terjadi Pertukaran <br>
1, 3, 5, 2, 4, 6, 7, 8 → Tidak Terjadi Pertukaran <br>
1, 3, 2, 5, 4, 6, 7, 8 → Terjadi Pertukaran <br>
1, 3, 2, 4, 5, 6, 7, 8 → Terjadi Pertukaran <br>

Iterasi 5: <br>
1, 3, 2, 4, 5, 6, 7, 8 → TIdak Terjadi Pertukaran <br>
1, 2, 3, 4, 5, 6, 7, 8 → Terjadi Pertukaran <br>
1, 2, 3, 4, 5, 6, 7, 8 → Tidak Terjadi Pertukaran <br>

Iterasi 6: <br>
1, 2, 3, 4, 5, 6, 7, 8 → Tidak Terjadi Pertukaran <br>
1, 2, 3, 4, 5, 6, 7, 8 → Tidak Terjadi Pertukaran <br>

Iterasi 7: <br>
1, 2, 3, 4, 5, 6, 7, 8 → Tidak Terjadi Pertukaran <br>

Jadi, hasil akhir deretan bilangan di atas setelah diurutkan dengan algoritma Bubble Sort secara Ascending ialah [1, 2, 3, 4, 5, 6, 7, 8]
<br><br>
Setelah melihat Ilustrasi di atas dapat disimpulkan bahwa algoritma Bubble Sort ini merupakan metode pengurutan yang paling sederhana dan sangat mudah untuk dipahami, namun meskipun dianggap sederhana, metode ini termasuk dalam metode yang paling tidak efisien karena proses pengurutan data dilakukan satu persatu mulai dari data paling kiri sampai data yang terakhir. Jika kita memiliki data yang sangat banyak atau dalam jumlah yang besar, maka prosesnya akan semakin lama dan lambat karena proses pengurutan datanya dilakukan satu per satu.

## Contoh Bubble Sort
```C
#include <stdio.h>
#include <stdlib.h>
#define size 5

void bubbleSort(int *arr){
   for(int i = 0; i < size - 1; i++){
      int temp;
      for (int j = 0; j < size - 1 - i; j++){
	 if(arr[j] > arr[j+1]){
	    temp = arr[j];
	    arr[j] = arr[j+1];
	    arr[j+1] = temp;
	 }
      }
   }
}

void outputNilai(int *arr){
   for(int i = 0; i < size; i++){
	printf("%d ", arr[i]);
   }
}

int main()
{
   int a[size] = {5, 7, 2, 9, 1};
   outputNilai(a);
   bubbleSort(a);
   printf("\nSorting : \n");
   outputNilai(a);
	
   return (0);
}
```

# Buble Sort VS Quick Sort
![](https://i.pinimg.com/originals/96/95/c6/9695c6e6e52483aa45102a3d5ae56461.gif)

## Contoh Bubble Sort (String)
```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char nama[100];
}blackpink;

int main()
{
	blackpink member[4] = {"Jennie", "Rose", "Lisa", "Jisoo"};
	blackpink temp;
	for(int i = 0; i < 4; i++){
		printf("%s ", member[i].nama);
	}

	printf("\n\n");
	for(int i = 0; i < 4 - 1; i++){
		for (int j = 0; j < 4 - i - 1; j++){
			if(strcmp(member[j].nama,member[j+1].nama)>0){
				temp = member[j];
				member[j] = member[j+1];
				member[j+1] = temp;
            }
		}
	}

	for(int i = 0; i < 4; i++){
		printf("%s ", member[i].nama);
	}
	
	return 0;
}
```
Keterangan : 
* `<string.h>` merupakan library yang menyimpan fungsi-fungsi yang digunakan untuk menangani string ataupun substring.
* tipe data `Struct` dapat dipelajari pada [link ini](https://github.com/fzl-22/ALPRO-Informatika-ITTelkomSurabaya/wiki/Modul-2.1:-Tipe-Data-Struct).
* `strcmp` merupakan fungsi yang ada pada `string.h`.

## Latihan Soal
1. Buatlah Program Sorting Ascending dan Descending Berdasarkan angka yang diinputkan oleh user! <br>
   Input : 
   ```
   Masukkan Berapa angka yang dimasukkan : 5          // 5 merupakan inputan
   
   Masukkan Angka
   85
   1
   32
   56
   8
   ```
   Output
   ```
   Ascending        =  1  8  32  56  85
   Descending       =  85  56  32  8  1
   ```

2. Buatlah program menu koperasi yang dapat menginputkan nama produk dan harga produk, kemudian dapat menampilkan data tersebut, dan terdapat menu searching untuk mencari data tertentu serta dapat menampilkan hasil sorting dengan menggunakan metode Ascending maupun descending!!
   <br>
   Note :
   * Anda dapat menggunakan tipe data bentukan ([Struct](https://github.com/fzl-22/ALPRO-Informatika-ITTelkomSurabaya/wiki/Modul-2.1:-Tipe-Data-Struct)) yang isinya barang dan harga
   * Inputan dari user hanya Barang dan Harga
   * Ascending untuk dua angka terakhir **NIM GENAP**
   * Descending untuk dua angka terakhir **NIM Ganjil**
   <br>
   Menu : <br>

   ![Menu](https://user-images.githubusercontent.com/90125356/208221869-855fbc33-6fb7-4488-8b16-c3b8b50f93b6.png)

   <br>
   Input Data : <br>

   ![input1](https://user-images.githubusercontent.com/90125356/208221831-b371f817-9789-43ff-9933-810c2a0cdb3b.png) 
   ![image](https://user-images.githubusercontent.com/90125356/208221925-c0b1fe05-55ac-463b-bc20-2aa3945eb764.png)
   ![image](https://user-images.githubusercontent.com/90125356/208221944-625711a2-44eb-4d6f-9b83-0226490a9b78.png)

   <br>
   Menampilkan Data Koperasi : <br>
   
   ![image](https://user-images.githubusercontent.com/90125356/208221993-70b91909-7a36-4a23-9a83-c27504ae36c8.png)

   <br>
   Searching Data Koperasi : <br>
   
   ![image](https://user-images.githubusercontent.com/90125356/208330232-f60629ff-adce-4612-ad28-4c7e40268c67.png) <br>

   
   Sorting Data Koprasi : <br>
   
   ![image](https://user-images.githubusercontent.com/90125356/208222110-40eb8e15-3808-4710-b670-8217f89fe117.png) <br>
