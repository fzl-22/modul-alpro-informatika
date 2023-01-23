#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int quickSortMax(int *arr, int x, int y){
    int start = x;
    int finish = y;
    int pivot = y;
    int arr2[y + 1];
    
    for(int i = 0; i <= y; i++){
        arr2[i] = arr[i];
    }

    if(start < finish){
        while(start < finish){
            while(arr2[start] <= arr2[pivot]) start++;
            while(arr2[finish] >arr2[pivot]) finish--;
            if(start < finish) swap(&arr2[start], &arr2[finish]);
        }
        swap(&arr2[finish], &arr2[pivot]);
        quickSortMax(arr2, 0, finish - 1);
        quickSortMax(arr2, finish + 1, y);
    }else return arr2[y];
}

int linearSearchMax(int *arr, int size){
    int max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

void show(int *arr, int size){
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main(){
    int angka[] = {3, -7, 1, 23, 2, 6, 14, 0, 9, 8, 11};
    int sizeAngka = sizeof(angka) / sizeof(int);

    printf("Array Before Find Max : ");
    show(angka, sizeAngka);

    int maxQS = quickSortMax(angka, 0, sizeAngka - 1);
    printf("Max from Quick Sort: %d\n", maxQS);

    int maxLS = linearSearchMax(angka, sizeAngka);
    printf("Max from Linear Search: %d\n", maxLS);

    printf("Array After Find Max : ");
    show(angka, sizeAngka);

    return 0;
}