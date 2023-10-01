# 1. Pengenalan File Handling
Dalam pemrograman, *file handling* digunakan untuk melakukan operasi file pada penyimpanan eksternal. Operasi-operasi yang dimaksud adalah membuat (*create*), membaca (*read*), memperbarui (*update*), dan menghapus (*delete*) file. Penggunaan *file handling* memungkinkan nilai input/output atau nilai variabel dapat disimpan dan digunakan kembali walaupun program sudah selesai berjalan. Sebagai perbandingan, perhatikan contoh berikut:

**Nilai pada Variabel dan Input/Output Stream:**
``````C
#include <stdio.h>

int main(){
	char str[]; // Ini adalah variabel
	printf("Masukkan nilai variabel str: ") // Ini adalah output stream
	scanf("%[^\n]s", str); // Ini adalah input stream
	printf("Nilai variabel str: ", str); // Ini adalah output stream
	return 0;
}
``````

Pada kedua contoh di atas, nilai dari variabel, input, maupun output stream-nya akan hilang ketika program sudah selesai berjalan karena hanya disimpan pada penyimpanan sementara (*memory*). Pada beberapa kasus, nilai dari variabel atau Input/Output Stream perlu disimpan sebagai *file* agar dapat digunakan kembali walaupun program sudah mati. Perhatikan contoh berikut:

**Menggunakan File Handling:**
``````C
#include <stdio.h>
#include <stdlib.h>

int main(){
	char str[50];
	FILE *fptr;

	/* Tuliskan PATH yang sesuai dengan sistem operasi kalian (Windows atau MacOS)
	Format: <PATH_ke_folder_workspace>/<nama_file>.txt
        atau tuliskan PATH berdasarkan top level directory (folder dimana kamu mengerjakan kodingan)
        Misalkan kamu bekerja di folder 'Tugas', dan di dalam folder 'Tugas' ada folder 'texts',
        maka PATH-nya adalah: texts/<nama_file>.txt */

	fptr = fopen("/home/ahmadfaisal/Documents/ALPRO-Informatika-ITTelkomSurabaya/File Handling/output.txt", "w");

        // Alternatif: fptr = fopen("texts/<nama_file>.txt", "w");

	if(fptr == NULL){
		printf("Error");
		exit(1);
	}

	printf("Masukkan nilai variabel str: ");
	scanf("%[^\n]s", str);

	fprintf(fptr,"%s", str);
	fclose(fptr);

	return 0;
}
``````

Jika program di atas selesai dijalankan, maka nilai dari variabel **str** akan disimpan dalam file baru yang bernama **output.txt**. Nilai dari **output.txt** dapat dilihat dan dipakai kembali walaupun program sudah selesai dijalankan.

![WhatsApp Image 2022-12-04 at 20 36 42](https://user-images.githubusercontent.com/94579033/205493631-39f7bf00-5a90-4d26-bbbf-371e369b33ec.jpeg)

Dapat dilihat di atas bahwa terdapat file baru di dalam folder 'File Handling' setelah program selesai dijalankan. Hal ini menandakan bahwa nilai dari variabel **str** sudah tersimpan sebagai file di penyimpanan eksternal, tidak hanya berada di memory.

# 2. Alur File Handling
Dalam melakukan *file handling*, alur utamanya adalah sebagai berikut:
1. Membuka/membuat file (*open*).
2. Menulis isi file (*write*).
3. Membaca file (*read*).
4. Menutup file (*close*).

Untuk mendukung operasi-operasi file di atas, maka dapat digunakan fungsi bawaan dari header `stdio.h` di bawah ini:
| **Deskripsi** | **Fungsi yang digunakan** |
| -- | -- |
| Membuka file yang sudah ada atau file baru (jika file belum ada) | fopen() |
| Menuliskan data di file yang sudah ada | fprintf() |
| Membaca data yang ada pada suatu file | fscanf() |
| Membaca string dari sebuah file | fgets() | 
| Menutup file | fclose() |

## 2.1 Membuka / Membuat File (*fopen*)

Sebelum melakukan pemrosesan file, file perlu dibuka terlebih dahulu dengan menggunakan syntax `fopen()` yang disimpan pada variabel pointer dengan tipe data `FILE` dengan format sebagai berikut:

`````C
FILE *fptr = fopen("<path_to_file/nama_file.txt>", "<open_mode>")
`````

**open_mode** dideklarasikan untuk menentukan apa saja yang bisa dilakukan terhadap file tersebut, misalnya hanya membaca file, hanya menuliskan file, dapat membaca sekaligus menulis file, dan lain-lain. Syntax untuk **open_mode** dapat dilihat di tabel di bawah ini:

|operator|deskripsi|
|--------|---------|
|   w    | membuat file baru untuk ditulis, jika terdapat file dengan nama yang sama, maka file tersebut akan ditimpa dengan file baru|
| r      | membuka file untuk dibaca isi dari file tersebut    |
| a      | mirip seperti operator w, namun tidak menumpuk (*overwrite*) isi file dengan isi file baru, melainkan menambahkan isi file baru di ujung (*End of File*) isi file yang lama|
| w+     | operator yang sama dengan w, namun selain dapat ditulis file tersebut juga dapat dibaca|
| r+     | operator yang sama dengan r, namun selain dapat dibaca file tersebut juga dapat ditulis |
| a+     | operator yang sama dengan a, namun selain dapat ditulis file tersebut juga dapat dibaca |

Asumsikan bahwa kita bekerja di folder 'File Handling' yang di dalamnya terdapat file kodingan kita dan file inputText.txt. Sebagai contoh, jika kita ingin membuka file dan file yang dibuka dapat kita tulis dengan cara menumpuk (*overwriting*) isi file. Maka, dapat kita tuliskan
`````C
FILE *fptr = fopen("FileHandling/inputText.txt", "w");
`````
Sedangkan, jika kita ingin membuka file dengan mode append sekaligus dapat dibaca. Maka, dapat kita tuliskan:
`````C
FILE *fptr = fopen("FileHandling/inputText.txt", "a+");
`````

## 2.2 Menulis File (*fprintf*)

Tahapan dalam menulis file
1. Melakukan deklarasi/pembuatan file dan mode penulisan file (pada contoh ini menggunakan `w`):
``````C
File *FileBaru;
FileBaru = fopen("namafile.txt", "w");
``````
2. Menulis Isi dari File:
``````C
fprintf(FileBaru, "%s", "Hello World"); // Struktur : fprintf(VariabelFile, "format Specifier", "input");
``````
3. Menutup File
Setelah selesai melakukan operasi penulisan file, maka file harus ditutup dengan fungsi seperti berikut :
``````C
fclose(FileBaru);
``````

Berikut merupakan keseluruhan syntax untuk melakukan operasi penulisan file : 
``````C
File *FileBaru;
FileBaru = fopen("namafile.txt","w");
fprintf(FileBaru,"%s","Hello World"); // Struktur : fprintf(VariabelFile, "format Specifier", "input");
fclose(FileBaru);
``````
Jika kita ingin file tersebut ditimpa setiap kali melakukan run program, maka ubah "w" menjadi "a".

## 2.3 Membaca File (fgets)

Untuk membaca file, maka file yang ingin dibaca harus sudah ada. Konsep dalam membaca file sangat mirip dengan penggunaan `gets` atau `scanf`. Dalam hal ini, kita sama saja dengan menginputkan nilai dari sebuah file ke dalam sebuah variabel. Berikut adalah format penggunaan `fgets`:
`````C
fgets(<variabel_string>, <ukuran_variabel_string>, <file_input>);
`````

Berikut contoh implementasinya:
``````C
#include <stdio.h>

int main()
{
    FILE *FileBaru;
    char IsiFile[1000];
    FileBaru = fopen("output.txt", "r");
    while (fgets(IsiFile, sizeof(IsiFile), FileBaru)){
        printf("%s", IsiFile);
    }
    fclose(FileBaru);
}
``````
Pada kode di atas, program akan langsung error ketika di-compile apabila file ouput.txt tidak ada. 

Untuk menjamin program akan tetap berjalan walaupun file output.txt tidak ada, kita perlu membuat pengecualian untuk kondisi ketika file tidak. Berikut adalah cara melakukannya:

1. Apabila file output.txt tidak ada, maka nilai dari variabel FileBaru adalah `NULL`.
2. Setelah membuka file, berikan kondisi apabila FileBaru bernilai NULL dan kondisi `else`.
3. Di dalam kondisi tersebut kondisi FileBaru adalah NULL, berikan pemberitahuan bahwa file tidak ada. Sedangkan, kode untuk membaca file FileBaru dimasukkan di dalam kondisi `else`.

Perhatikan contoh berikut:
`````C
#include <stdio.h>

int main()
{
    FILE *FileBaru;
    char IsiFile[1000];
    FileBaru = fopen("output.txt", "r");
    if (FileBaru == NULL){
        printf("WHERE IS THE FILE BRO??");
    }
    else{
        while (fgets(IsiFile, sizeof(IsiFile), FileBaru)){
			printf("%s", IsiFile);
		}
    }
    fclose(FileBaru);
}
`````

## 2.4 Menutup File (*fclose*)
Setiap kali melakukan file handling, pastikan untuk menutup file yang sudah dibuka untuk mencegah *memory leak*. Menutup file dilakukan dengan menuliskan syntax `fclose()` apabila file sudah tidak dibutuhkan lagi dengan format berikut:
`````C
fclose(FileBaru);
`````
Perhatikan bahwa semua kode di atas menggunakan `fclose()`.
# Latihan Soal
Buatlah sebuah program dalam bahasa C untuk membuat file kosong dengan nama `data_diri.txt` yang berada di folder lain `texts`. Dalam program tersebut, file dapat diisi (ditulis) dengan format 4 baris yang berisi masing-masing nama lengkap, NIM, program studi, dan asal perguruan tinggi (gunakan perulangan) dari input oleh user. Setelah file telah diisi, program juga dapat membaca isi file tersebut dan mengoutputkannya di terminal. 

**File data_diri.txt sebelum input** (kosong)
```

```

**File data_diri.txt setelah input**
```
Ahmad Faisal
1203210101
Informatika
Institut Teknologi Telkom Surabaya
```

**Output di terminal setelah program selesai**
`````
Ahmad Faisal
1203210101
Informatika
Institut Teknologi Telkom Surabaya
`````