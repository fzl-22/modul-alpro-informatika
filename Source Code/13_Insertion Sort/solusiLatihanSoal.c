#include <stdio.h>

void BarisDua(int angka[], int panjang)
{
    for (int a = 1; a < panjang; a++){
        int key = angka[a];
        int b = a - 1;
        while (b >= 0 && angka[b] > key)
        {
            angka[b + 1] = angka[b];
            b = b - 1;
        }
        angka[b + 1] = key;
    }

    for (int a = 1; a < panjang; a += 2){
        int key = angka[a];
        int b = a - 2;
        while (b >= 0 && angka[b] < key)
        {
            angka[b + 2] = angka[b];
            b = b - 2;
        }
        angka[b + 2] = key;
    }

    printf("Baris 2 : ");
    show(angka, panjang);
}

void BarisSatu(int angka[], int panjang)
{
    for (int a = 1; a < panjang; a++){
        int key = angka[a];
        int b = a - 1;
        while (b >= 0 && angka[b] > key){
            angka[b + 1] = angka[b];
            b = b - 1;
        }
        angka[b + 1] = key;
    }

    for (int a = panjang / 2 + 1; a < panjang; a++){
        int key = angka[a];
        int b = a - 1;
        while (b >= panjang / 2 + 1 && angka[b] < key){
            angka[b + 1] = angka[b];
            b = b - 1;
        }
        angka[b + 1] = key;
    }

    printf("Baris 1 : ");
    show(angka, panjang);
}

void show(int angka[], int panjang){
    for (int a = 0; a < panjang; a++){
        printf("%d ", angka[a]);
    }
    printf("\n");
}

int main(){
    int angka[] = {1, 9, 4, 5, 6, 7, 2, 3, 8, 1, 9, 4, 5, 6, 7, 2, 3, 8};
    int panjang = sizeof(angka) / sizeof(int);
    
    BarisSatu(angka, panjang);
    BarisDua(angka, panjang);
}