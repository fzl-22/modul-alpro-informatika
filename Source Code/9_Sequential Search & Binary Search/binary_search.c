#include <stdio.h>

int binarySearch(int cari, int *arr, int right)
{
    int left = 0;
    while (left <= right){
        int mid = (left + right) / 2;
        printf("awal[%d],tengah[%d],akhir[%d]\n", left, mid, right);
        if (cari == arr[mid]) return mid;
        if (cari > arr[mid]) left = mid + 1;
        else right = mid - 1;
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