#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int *arr, int size, bool ascending){
    if(ascending){
        for(int a = 0; a < size-1; a++){
            for(int b = 0; b < size - 1- a; b++){
                if(arr[b] > arr[b+1]){
                    int tmp = arr[b];
                    arr[b] = arr[b+1]; 
                    arr[b+1] = tmp;
                }
            }
        }
    }else{
        for(int a = 0; a < size-1; a++){
            for(int b = 0; b < size - 1- a; b++){
                if(arr[b] < arr[b+1]){
                    int tmp = arr[b];
                    arr[b] = arr[b+1]; 
                    arr[b+1] = tmp;
                }
            }
        }
    }
    showArray(arr,size);
}

int binarySearch(int find, int *arr, int right){
    int left = 0;
    while (left <= right){
        int mid = (left + right) / 2;
        if (find == arr[mid]) return mid;
        if (find < arr[mid]) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

void showArray(int *arr, int size){
    system("clear");
    for(int a = 0; a < size; a++){
        printf("[%d] ", arr[a]);
    }
    printf("\n");
}

void inputArray(int *arr, int size){
    for(int i = 0; i < size; i++){
        printf("Masukkan angka ke-%d: ", i+1);
        scanf("%d", &arr[i]);
    }
    system("clear");
}

int main(){
    int angka[10];
    int size = sizeof(angka)/sizeof(angka[0]);
    bool loop = true;
    int query;
    int find;
    while(loop){
        printf("1. Masukkan 10 Angka\n");
        printf("2. Sort Ascending\n");
        printf("3. Sort Descending\n");
        printf("4. Cari Angka\n");
        printf("5. Keluar\n\n");
        printf("Masukkan Pilihan: ");
        scanf("%d", &query);

        if(query == 1) inputArray(angka, size);
        else if(query == 2) bubbleSort(angka, size, true);
        else if(query == 3) bubbleSort(angka, size, false);
        else if(query == 5) loop = false;
        else if(query == 4){
            system("clear");
            showArray(angka, size);
            printf("Masukkan angka yang ingin dicari: ");
            scanf("%d", &find);
            int index = binarySearch(find, angka, size - 1);
            if(index == -1) printf("Angka tidak ditemukan.\n\n");
            else printf("Angka %d ada di index ke: %d.\n\n", find, index);
        }
        else if(query == 5) loop = false;
        else printf("Input tidak valid\n");
    }
    printf("Terimakasih sudah mengerjakan!\n");
}