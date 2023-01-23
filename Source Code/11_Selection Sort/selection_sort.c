#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int *arr, int size, bool isAscending){
    if(isAscending){
        for(int i = 0; i < size; i++){
            int indexNilaiMinimum = i;
            for(int j = i; j < size; j++){
                if(arr[j] < arr[indexNilaiMinimum]){
                    indexNilaiMinimum = j;
                }
            }
            swap(&arr[i], &arr[indexNilaiMinimum]);
        }
    }else{
        for(int i = 0; i < size; i++){
            int indexNilaiMaximum = i;
            for(int j = i; j < size; j++){
                if(arr[j] > arr[indexNilaiMaximum]){
                    indexNilaiMaximum = j;
                }
            }
            swap(&arr[i], &arr[indexNilaiMaximum]);
        }
    }
}

int main(){
    int arrInt[] = {2, 5, 6, 8, 9, 13, 7, 9, 12};
    int size = sizeof(arrInt)/sizeof(int);

    selectionSort(arrInt, size, true);

    for(int i = 0; i < size; i++){
        printf("%d ", arrInt[i]);
    }
    return 0;
}