# Daftar Isi

- Pengenalan Fungsi dalam Pemrograman
- Fungsi dalam Bahasa Python
	- Fungsi dengan Pengembalian Nilai
	- Fungsi tanpa Pengembalian Nilai
	- Fungsi dengan Parameter dan Tanpa Parameter
	- Fungsi dengan Parameter Wajib dan/atau Opsional
	- Fungsi Rekursif
- Latihan Soal
# 1. Pengenalan Fungsi dalam Pemrograman

Dalam pemrograman, istilah fungsi (*function*) adalah sebuah barisan kode program yang dapat digunakan berulang-kali dengan cara memanggilnya. Fungsi **biasanya membutuhkan input** (tapi tidak selalu), **melakukan suatu proses**, kemudian **mengembalikan (*return*) atau menampilkan hasil prosesnya**. Maka dari itu, fungsi juga biasanya disebut *sub-program* atau *sub-routine* karena memenuhi definisi dari program, hanya saja fungsi terletak di dalam program utama. Untuk mempelajari garis besar fungsi, perhatikan gambar berikut:

![[Pasted image 20221210221352.png]]

Karena hal tersebut, berikut adalah setidaknya 3 keuntungan dalam menggunakan fungsi:
1. Dapat memecah-mecah program yang kompleks, dimana setiap langkah-langkahnya dapat didefinisikan fungsinya sendiri-sendiri.
2. Menggunakan kembali kode program tanpa menulisnya ulang.
3. Mempermudah dalam membaca program.

Namun, pertanyaan ini perlu dijawab setelah materi: *apakah penggunaan fungsi dapat membuat program berjalan dengan lebih efisien?*

Catatan: bedakan antara efisiensi saat menulis kode dengan efisiensi saat program berjalan.

# 2. Fungsi dalam Bahasa Python

Dalam Python, fungsi dituliskan dan dipanggil dengan format sebagai berikut:

``````Python
# Format pendefinisian fungsi
def nama_fungsi(parameterFormal1, parameterFormalN):
	# function body / process
	# function body / process
	# function body / process
	return returned_variable # opsional, sesuai kebutuhan

# Format pemanggilan fungsi
var = nama_fungsi(parameterAktual1, parameterAktualN) # jika fungsi mengembalikan nilai
nama_fungsi(parameterAktual1, parameterAktual) #Jika fungsi tidak mengembalikan nilai
``````

Pada format di atas, dapat disimpulkan bahwa aturan dalam pendefinisian fungsi adalah sebagai berikut:
1. Gunakan statement `def` untuk mendefinisikan fungsi, diikuti dengan nama fungsi.
2. Setelah nama fungsi, tuliskan daftar nama parameter formal (nama variabel sebagai input fungsi) di dalam tanda kurung. Kemudian, diakhiri dengan tanda titik dua (:).
3. Badan fungsi (*function body*) adalah kode program untuk melakukan proses di dalam fungsi. Function body **wajib** terindentasi.
4. Pengembalian nilai (menggunakan statement `return`) dilakukan secara opsional (sesuaikan dengan proses apa yang ingin dilakukan). Statement `return` tidak selalu berada di akhir fungsi, namun perlu diingat bahwa fungsi akan langsung berhenti ketika mencapai syntax tersebut. Gunakan sesuai kebutuhan.

Sedangkan, aturan dalam pemanggilan fungsi adalah sebagai berikut:
1. Pemanggilan fungsi dilakukan dengan menuliskan nama fungsi (tanpa `def`), kemudian menuliskan daftar parameter aktual (nilai / variabel dari luar fungsi yang ingin di-passing ke fungsi).
2. Jika fungsi mengembalikan nilai, panggil fungsi untuk disimpan dalam variabel.
3. Jika fungsi tidak mengembalikan nilai, panggil fungsi tanpa disimpan dalam variabel.

Subbab-subbab selanjutnya menjelaskan jenis-jenis fungsi dalam Python.

## 2.1 Fungsi Dengan Pengembalian Nilai

Suatu fungsi dikatakan mengembalikan nilai apabila memiliki `return` di dalam badan fungsinya. Perhatikan contoh berikut:

`````Python
# Fungsi untuk menghitung luas segitiga, jika diketahui panjang alas dan tingginya.
def luasSegitiga(alas, tinggi):
	result = 0.5*alas*tinggi
	return result
`````

Pada fungsi tersebut, `return result` memiliki arti bahwa fungsi `luasSegitiga` mengembalikan nilai dari variabel `result` ke program utama. Sehingga ketika memanggil fungsi tersebut, nilai dari variabel `result` perlu disimpan di dalam variabel di program utama seperti berikut:

`````Python
def luasSegitiga(alas, tinggi):
	result = 0.5*alas*tinggi
	return result

hasilLuas = luasSegitiga(10, 10)
print(f"Luas Segitiga: {hasilLuas}")
`````

## 2.2 Fungsi Tanpa Pengembalian Nilai

Kebalikan dari subbab sebelumnya, fungsi dikatakan **tidak** mengembalikan nilai apabila **tidak** memiliki `return` di dalam badan fungsinya. Dalam bahasa pemrograman lain (seperti C/C++ dan Java), fungsi jenis ini disebut dengan prosedur. Untuk memahami fungsi jenis ini, perhatikan contoh di bawah:

`````Python
def predikatMahasiswa(nilai1, nilai2, nilai3):
	rataRata = (nilai1 + nilai2 + nilai3)/3
	if rataRata >= 80 and rataRata <= 100:
		print("Selamat, predikat kamu A!")
	elif rataRata >= 60 and rataRata < 80:
		print("Predikat kamu B, pertahankan yaa!")
	elif rataRata >= 30 and rataRata < 60:
		print("Predikat kamu C, perbaiki ya!")
	elif rataRata >= 0 and rataRata < 30:
		print("Mending pulang deck")
		
nilaiMhs1 = int(input("Masukkan nilai pertama: "))
nilaiMhs2 = int(input("Masukkan nilai kedua: "))
nilaiMhs3 = int(input("Masukkan nilai ketiga: "))

predikatMahasiswa(nilaiMhs1, nilaiMhs2, nilaiMhs3)
`````

Perhatikan bahwa pada kode di atas, fungsi tidak mengembalikan nilai. Maka dari itu, tidak perlu disimpan dalam variabel. Namun, jika tetap memaksakan untuk menyimpannya ke variabel. Maka output yang ditampilkan akan ada dua, yaitu output dari fungsi itu sendiri dan `None`. Output `None` muncul karena fungsi tanpa pengembalian nilai sebenarnya masih mengembalikan nilai. Namun karena tidak ada nilai yang dikembalikan, maka fungsi tersebut mengembalikan nilai `None` (yangmana artinya adalah 'tidak ada').

## 2.3 Fungsi dengan Parameter dan Tanpa Parameter

Fungsi dengan parameter adalah fungsi yang memiliki setidaknya satu parameter sebagai input dari fungsi tersebut (seperti yang dicontohkan beberapa subbab di atas). Namun, terkadang ada beberapa kasus dimana sebuah fungsi tidak memerlukan parameter sama sekali. Fungsi ini disebut dengan fungsi tanpa parameter, seperti pada contoh berikut:

`````Python
def menuUncleMuthu():
	print("=======================")
	print("Daftar Menu Uncle Muthu")
	print("=======================")
	print("1. Teh")
	print("2. Teh Ice")
	print("3. Teh Tarik")
	print("4. Milo Ice")

menuUncleMuthu()
`````

Fungsi di atas menggunakan fungsi tanpa pengembalian nilai. Fungsi tidaklah terbatas hanya di situ, fungsi tanpa parameter juga bisa mengembalikan nilai.

## 2.4 Fungsi dengan Parameter Wajib dan/atau Opsional

Parameter wajib adalah parameter yang wajib dikirimkan ke fungsi ketika dipanggil di program utama. Sedangkan, parameter opsional adalah parameter yang boleh tidak dikirimkan ke fungsi ketika dipanggil, **namun** memiliki syarat bahwa parameter opsional tersebut sudah memiliki nilai default saat didefinisikan. Sehingga, ketika parameter opsional tidak dikirimkan ketika pemanggilan fungsi, maka nilai defaultnya dapat digunakan. Untuk memahaminya lebih lanjut, perhatikan program di bawah ini:

`````Python
def dataDiri(nama, nim, email="Tidak Diisi", kebangsaan="Sunda Empire"):
	print("Data Diri:")
	print(f"\tNama\t: {nama}")
	print(f"\tNIM\t: {nim}")
	print(f"\tEmail\t: {email}")
	print(f"\tKebangsaan: {Sunda Empire}")
	print()

dataDiri("Ahmad Faisal", 1203210101) # boleh tidak diisi
dataDiri("Ahmad Faisal", 1203210101, email="example@gmail.com") # boleh diisi
dataDiri("Ahmad Faisal", 1203210101, kebangsaan="Indonesia", email="example@gmail.com") # posisinya boleh diubah
`````

Pada kode di atas, `nama`, `nim` adalah parameter wajib, sedangkan `email`, dan `kebangsaan` adalah parameter opsional. Perhatikan bahwa:
1. Parameter opsional boleh tidak diisi.
2. Apabila parameter opsional diisi, maka wajib menuliskan nama parameter formal yang ingin diisi.
3. Ketika fungsi dipanggil, urutan posisi antar parameter opsional boleh diubah atau ditukar (namun, tidak antara parameter wajib).

Pertanyaan: apa yang terjadi jika parameter `email` diisi pada urutan pertama ketika dipanggil?

## 2.5 Fungsi Rekursif

Fungsi rekursif adalah fungsi yang memanggil dirinya sendiri. Masih bingung? Mari kita pahami maksud dari rekursi (*recursion*) terlebih dahulu!

### 2.5.1 Konsep Rekursi: Recursive Case dan Base Case

Perhatikan gambar boneka lucu di bawah ini:

![[Pasted image 20221211004619.png]]

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

### 2.5.2 Studi Kasus Fungsi Perpangkatan

Sebagai contoh, kita akan membuat fungsi rekursif untuk menghitung pangkat dari suatu bilangan bulat. Definisikan fungsi $power(a, n)$ adalah perpangkatan bilangan $a$ terhadap $n$. Atau dengan definisi lain, dinyatakan bahwa $power(a, n)$ adalah perkalian berulang bilangan $a$ sebanyak $n$-kali. Sehingga, dapat dituliskan sebagai berikut:
$$power(a, n)=
\begin{cases}
	a\times power(a, n-1), & \text{jika}\ n>0\\
	1, & \text{jika}\ n=0
\end{cases}
$$
Hal tersebut bisa kita buktikan dengan observasi sederhana seperti berikut:
$$power(5,4)=5\times 5^3=5\times 5\times 5^2=5\times 5\times 5\times 5^1=5\times 5\times 5\times 5\times 5^0=5\times 5\times 5\times 5\times 1$$
Perhatikan bahwa:
- Fungsi $power(a, n)$ akan terus memanggil dirinya sendiri selama $n>0$ (**recursive case**)
- Fungsi $power(a,n)$ akan berhenti memanggil dirinya sendiri saat $n=0$ (**base case**)

Dengan observasi di atas, maka dapat dituliskan kode program fungsi $power(a, n)$ sebagai berikut:

`````Python
def power(a, n):
	if n > 0: # recursive case
		return a*power(a, n - 1)
	else: # base case
		return 1

print(f"Hasil dari 5 dipangkatkan 4 adalah {power(5, 4)}")
`````

# Latihan Soal

Dari bilangan 0 – 100, buatlah fungsi untuk menampilkan bilangan kelipatan $n_1$ yang tidak habis dibagi $n_2$ tetapi habis dibagi $n_3$. Tampilkan juga banyak bilangan yang muncul.

Catatan: $n_1$, $n_2$, dan $n_3$ merupakan input dari user.

**Input Format**
Terdapat tiga baris input yang secara berturut-turut berisi nilai $n_1$, $n_2$, dan $n_3$.

**Output Format**
Terdapat dua baris output. Baris pertama berisi bilangan-bilangan yang memenuhi soal dengan dipisahkan tanda spasi " ". Baris kedua berisi banyaknya bilangan-bilangan yang muncul tersebut.

**Sample Input 1**
```
4
5
3
```

**Sample Output 1**
```
12 24 36 48 72 84 96
7
```

**Sample Input 2**
```
7
3
5
```

**Sample Output 2**
```
35 70
2
```