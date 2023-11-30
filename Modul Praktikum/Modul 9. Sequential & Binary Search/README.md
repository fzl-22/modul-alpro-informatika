# Searching Algorithm
Searching algorithm atau algoritma pencarian merupakan algoritma yang digunakan untuk mencari sebuah item dalam sebuah kumpulan data. Terdapat banyak jenis algoritma pencarian seperti sequential searching, binary searching, jump searching, interpolation searching, dan banyak lagi. 

# Sequential Searching
Sequential searching atau biasa disebut linear searching merupakan algoritma pencarian dasar yang melakuan pencarian item di dalam data dengan bentuj baris atau list. Pencarian menggunakan sequential searching sangat mudah yaitu dilakukan dengan memeriksa satu per satu data secara berurutan untuk memastikan kecocokan antara tiap-tiap data dengan data yang dicari. Data-data yang dicari dapat beraneka ragam, menyesuaikan dari kebutuhan program.

Berikut merupakan ilustrasi dari sequential searching :

![](https://www.tutorialspoint.com/data_structures_algorithms/images/linear_search.gif)

Kelebihan dari algoritma ini adalah sangat mudah diimplementasikan, namun algoritma ini juga memiliki kelemahan yaitu membutuhkan waktu pemrosesan yang besar ketika data yang dicari terdapat di dalam kumpulan data yang sangat besar.

Berikut merupakan contoh kode program `Sequential Search` :

``````C
#include <stdio.h>

int sequentialSearch(int cari, int*arr, int arrLength){

    for(int i = 0; i < arrLength; i++){
        if(cari == arr[i] && i != arrLength) return i;
    }
    return -1;
}

int main()
{

    int barisAngka[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arrLength = sizeof(barisAngka)/sizeof(int);
    int cari;

    printf("Masukkan angka yang dicari: ");
    scanf("%d", &cari);

    int resultIndex = sequentialSearch(cari, barisAngka, arrLength);
    if(resultIndex == -1) printf("Angka tidak ditemukan\n");
    else printf("Angka %d ada di index %d\n", cari, resultIndex);

    return 0;
}

``````

# Binary Search
Binary Search merupakan sebuah algoritma **pencarian** untuk mencari nilai tertentu dalam sebuah **array linear**, dengan cara menghilangkan setengah porsi array pada setiap pengulangannya.

### Cara Kerja Binary Search : 
1. Dimulai dari index tengah dari sebuah array sebagai _**Search Key**_, _**low**_ sebagai batas kiri, dan _**high**_ sebagai batas kanan.
![gambar 1](https://github.com/fzl-22/ALPRO-Informatika-ITTelkomSurabaya/blob/master/image/Binary%20search/bs1.jpg)
2. Jika nilai dari _**Search Key**_ sama dengan nilai yang dicari, maka 
   kembalikan nilai _**Search Key**_.
3. Atau jika nilai yang dicari **lebih kecil** dari _**Search Key**_, maka persempit area pencarian ke bagian bawah dengan memindahkan _**high**_ kesisi kiri _**Search Key**_.
![gambar 1](https://github.com/fzl-22/ALPRO-Informatika-ITTelkomSurabaya/blob/master/image/Binary%20search/bs2.jpg)
4. Sebaliknya jika nilai yang dicari **lebih besar** dari _**Search Key**_, maka persempit area pencarian ke bagian atas dengan memindahkan _**low**_ kesisi kanan _**Search Key**_.
![gambar 1](https://github.com/fzl-22/ALPRO-Informatika-ITTelkomSurabaya/blob/master/image/Binary%20search/bs3.jpg)
5. Periksa berulang kali dari poin nomor dua hingga nilainya ditemukan atau intervalnya kosong.

### Contoh implementasi Binary Search dalam bahasa C
`````` C
#include <stdio.h>

int binarySearch(int cari, int *arr, int right)
{
    int left = 0;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        printf("awal[%d],tengah[%d],akhir[%d]\n", left, mid, right);
        if (cari == arr[mid])
            return mid;
        if (cari > arr[mid])
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    int barisAngka[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arrLength = sizeof(barisAngka) / sizeof(int);
    int cari;

    printf("Masukkan angka yang dicari: ");
    scanf("%d", &cari);

    int resultIndex = binarySearch(cari, barisAngka, arrLength - 1);
    if (resultIndex == -1)
        printf("Angka tidak ditemukan\n");
    else
        printf("Angka %d ada di index %d\n", cari, resultIndex);

    return 0;
}
``````

# Sequential Search vs Binary Search
![](https://blog.penjee.com/wp-content/uploads/2015/04/binary-and-linear-search-animations.gif)

# Soal Latihan
1. Buatlah array 2 dimensi dengan ukuran 3x3 dan lakukan pencarian terhadap suatu angka di dalam array 2 dimensi tersebut. Jika angka ditemukan, outputkan baris dan kolom dari angka tersebut dan jika tidak, maka outputkan angka tidak ditemukan.
   
   Input :
   ``````
   5
   ``````
   Output :
   ``````
   Angka 5 berada pada baris ke 0 kolom ke 2.
   ``````
2. Dalam penulisan syntax dalam pemrograman, terdapat beberapa konvensi. Salah satunya adalah `snake_case` dan `camelCase`. Diberikan sebuah input nama variabel dalam penulisan `snake_case`, misalnya `is_variable_true`. Buatlah program untuk mengubah penulisan tersebut menjadi `camelCase`, yaitu `isVariableTrue`. Test case input dipastikan berupa `snake_case`.

    Input:
    ```
    is_sorted_array
    ```
    
    Output:
    ```
    isSortedArray
    ```

4. Buatlah Sequential Algoritm dengan menggunakan while looping.
