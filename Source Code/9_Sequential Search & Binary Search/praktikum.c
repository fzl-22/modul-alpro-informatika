#include <stdio.h>

// int sequentialSearch(int cari, int *arr, int arrLength){
//     for(int i = 0; i < arrLength; i++){
//         if(cari == arr[i] && i != arrLength) return i;
//     }
//     return -1;
// }

void sequentialSearch(int cari, int *arr, int arrLength){
    int dummy = 0;
    for(int i = 0; i < arrLength; i++){
        if(cari == arr[i]){
            printf("Angka %d ada di index %d.\n", cari, i);
            dummy = 1;
        }
    }
    if(dummy == 0) printf("Data tidak ditemukan.\n");
}

int main()
{

    int barisAngka[] = {1, 2, 3, 4, 5, 5, 7, 1, 9, 10};
    int arrLength = sizeof(barisAngka)/sizeof(int);
    int cari;

    printf("Masukkan angka yang dicari: ");
    scanf("%d", &cari);

    sequentialSearch(cari, barisAngka, arrLength);
    // int resultIndex = sequentialSearch(cari, barisAngka, arrLength);
    // if(resultIndex == -1) printf("Angka tidak ditemukan\n");
    // else printf("Angka %d ada di index %d\n", cari, resultIndex);

    return 0;
}
