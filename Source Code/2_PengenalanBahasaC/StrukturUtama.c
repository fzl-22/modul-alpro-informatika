#include <stdio.h>  // Ini adalah header file
#include <stdbool.h>

#define pi_1 3.14 // Deklarasi konstanta cara 1
const float pi_2 = 3.14; // Deklarasi konstanta cara 2

int main(){ 
    // VARIABEL
    // int x = 10;
    // int myAge = 19;
    // int a = 10, myAge = 19;
    int x, my_Age;
    x = 214748;
    my_Age = 19;
    printf("%i\n", my_Age);
    my_Age = 15;
    printf("%i\n", my_Age);
    printf("Angka kesukaan saya adalah %i, sedangkan usia saya adalah %i tahun\n", x, my_Age);

    // KONSTANTA
    int r = 10;
    float Luas = pi_1*r*r;
    // pi_1 = 100; Error karena konstanta tidak bisa diubah
    printf("Luas Lingkaran = %f\n", Luas);
    printf("Luas Lingkaran = %f\n", pi_1*r*r);

    // BOOLEAN
    int a = 1;
    bool afakahIya = true; // true, diisi oleh nilai
    printf("Apakah benar a = 1? %i\n", afakahIya);
    afakahIya = (a == 2); // false, diisi oleh operasi
    printf("Apakah benar a = 2? %i\n", afakahIya);

    // OPERATOR (MODULO)
    int sisaBagi = 700 % 3;
    printf("700 mod 3 = %d\n", sisaBagi);
    int hasilJumlah = x + 5;
    printf("x + 5 = %d\n", hasilJumlah);

    a = 1;
    a = a + 1; // Increment, hasilnya a = 2
    printf("%d\n", a);
    a = a - 1; // Decrement, hasilnya a = 1
    printf("%d\n", a);
    a = a * 10; // hasilnya 10
    printf("%d\n", a);

    // OPERATOR RELASIONAL
    printf("Apakah 1 = 2? %d\n", 1 == 2);
    printf("Apakah 1 != 2? %d\n", 1 != 2);
    printf("Apakah 1 kurang dari 2? %d\n", 1 < 2);

    // OPERATOR LOGICAL
    a = 1;
    int b = 7;
    afakahIya = !(a == 1);
    printf("Apakah iya a = 1? %d\n", afakahIya);
    bool afakahIya2 = (a == 1) && (b == 8);
    printf("Apakah a = 1 DAN b = 7? %d\n", afakahIya2);
    bool afakahIya3 = (a == 2) || (b == 8);
    printf("Apakah a = 2 OR b = 7? %d\n", afakahIya3);
    return 0;
}

// Menjalankan Program :
// Ctrl + S, kemudian Ctrl + Alt + N