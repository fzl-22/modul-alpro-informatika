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





















// int sequentialSearch(int cari, int *arr){
//     int arrLength = sizeof(arr);
    
//     int i = 0;
//     while(i < arrLength){
//         if(cari == arr[i]) return i;
//         i++;
//     }
//     return -1;
// }    