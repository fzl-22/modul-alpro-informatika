# Daftar Isi
* Definisi Fungsi dan Prosedur
* Fungsi dalam Bahasa C
* Prosedur dalam Bahasa C

# Definisi Fungsi dan Prosedur
Fungsi dan prosedur merupakan suatu bagian dari program (sub-program). Fungsi dan prosedur digunakan untuk menjalankan program tertentu. Biasanya fungsi dan prosedur digunakan untuk mendefinisikan sub-program yang dilakukan berulang kali. Beberapa tujuan dari fungsi dan prosedur adalah :
1. Modularisasi, memisahkan langkah-langkah detail ke satu atau lebih fungsi.
1. Dapat mengurangi pengulangan (duplikasi) kode, sehingga mengurangi ukuran file program.
1. Mudah memahami alur program.
1. Mudah menemukan kesalahan program (bug).

# Fungsi dalam Bahasa C

```````
<return_type> <function_name>(<data_type> <parameter1>, <data_type> <parameter2>){
    // deklarasi variabel lokal (jika ada)
    // algoritma / function_body
    return <return_value>; 
}
```````

Parameter adalah sebutan untuk nilai inputan fungsi pada saat fungsi itu didefinisikan, sedangkan argumen adalah sebutan untuk nilai inputan fungsi pada saat fungsi itu dipanggil.

Fungsi terdiri dari 3 bagian seperti pada Gambar diatas yaitu bagian header, bagian deklarasi dan badan fungsi. Penjelasan masing-masing bagian tersebut adalah sebagai berikut :
1. Header : Tipe data nilai kembalian fungsi, nama fungsi, tipe data argumen, variabel argumen
1. Deklarasi : Deklarasi variabel lokal
1. Badan fungsi : kode sub program, nilai kembalian/output

Agar Dapat lebih memahami pengertian Fungsi, buatlah program seperti pada program dibawah ini
``````` C
#include <stdio.h>

int sum()
{
    int hasil = 5 + 3;
    return hasil;
}

int main(){
    printf("%d", sum());
}
```````
Program diatas merupakan Fungsi `sum` untuk mencetak nilai dari variabel `hasil`. Nilai dari variabel `hasil` dikirimkan menggunakan perintah `return`. Tipe fungsi diatas bernilai integer, karena nilai yang dikirim berupa integer. Pemanggilan fungsi dilakukan pada fungsi `main()` dengan cara menuliskan nama fungsi diikuti tanda kurung `()`. 

Fungsi juga dapat digunakan dengan parameter. Cobalah membuat kode program seperti dibawah ini : 
``````` C
#include <stdio.h>

int sum(int a, int b)
{
    int hasil = a + b;
    return hasil;
}

int main(){
    printf("%d", sum(5,3));
}
```````
# Prosedur dalam Bahasa C
Prosedur adalah suatu blok program yang terpisah dengan blok utama. Perbedaan prosedur dengan fungsi adalah pada fungsi terdapat return value, sedangkan pada prosedur tidak.
````
//contoh penulisan prosedur
void NamaProsedur (DaftarParameter){  
     /*Code atau Badan Prosedur*/  
}
//contoh pemanggilan prosedur
NamaProsedur(DaftarArgumen);
````

````C
void arithmetic(int a, int b){
    printf("\n%d + %d = %d",a,b,a+b);  //dengan prosedur kode 3 kali lebih singkat
    printf("\n%d - %d = %d",a,b,a-b);
    printf("\n%d / %d = %d",a,b,a/b);
    printf("\n%d * %d = %d",a,b,a*b);
    printf("\n");
}

int main (void){
    arithmetic(9,10);
    arithmetic(8,4);
    arithmetic(7,4);
return 0;
}
````
Dengan menggunakan prosedur kode yang ditulis akan lebih singkat dan mudah dibaca.

## Menggunakan pointer dalam prosedur
Setiap variabel yang kita buat pada dasarnya membuat sebuah alamat pada memori. Pemilihan alamat ini akan dilakukan secara acak. Hal inilah yang membuat yang menyebabkan memory dinamakan RAM (Random Access Memory).
````C
int main (void)
{
    int a=2;
    int* b=6;
    printf("%d",a);
    printf("\n%d",&a);
    printf("\n%d",b);
    printf("\n%d",&b);
    return 0;
}
````

Mengubah nilai variabel dalam main menggunakan prosedur
````C
void luasPersegi (int* luas,int a, int b){
    *luas = a * b;
    printf("\nLuas persegi panjang adalah %d",*luas);
}

int main (void){
    int luas,p,l;
    printf("Masukan panjang ");
    scanf("%d",&p);
    printf("Masukan luas ");
    scanf("%d",&l);

    luasPersegi(&luas,p,l);
    printf("\nLuas persegi panjang (main) %d",luas);

    return 0;
}
````
Coba hapus simbol asterik `*` pada void luasPersegi dan hapus simbol ampersand `&` pada int main.

