#include <stdio.h>

void insertionSort(int *arr, int size){
    for(int a = 1; a < size; a++){
        int key = arr[a];
        int b = a - 1;
        while(b >= 0 && arr[b] > key){ // Jika ascending, pakai comparator >
            arr[b + 1] = arr[b];
            b--;
        }
        arr[b + 1] = key;
    }
}

void show(int angka[], int panjang){
    for (int a = 0; a < panjang; a++){
        printf("%d ", angka[a]);
    }
}

int main(){
    int angka[] = {10, 5, 3, 1, 2, 9, 7, 4, 6};
    int panjang = sizeof(angka)/sizeof(int);

    insertionSort(angka, panjang);

    show(angka, panjang);
}


// #include <stdio.h>

// void InsertionSort(int angka[], int panjang)
// {
//     for (int a = 1; a < panjang; a++)
//     {
//         int key = angka[a];
//         int b = a - 1;
//         while (b >= 0 && angka[b] > key)
//         {
//             angka[b + 1] = angka[b];
//             b = b - 1;
//         }
//         angka[b + 1] = key;
//     }
// }

// void show(int angka[], int panjang)
// {
//     for (int a = 0; a < panjang; a++)
//     {
//         printf("%d ", angka[a]);
//     }
// }

// int main()
// {
//     int angka[] = {10, 5, 3, 1, 2, 9, 7, 4, 6};
    
//     int panjang = sizeof(angka) / sizeof(int);
//     InsertionSort(angka,panjang);
//     show(angka,panjang);
// }