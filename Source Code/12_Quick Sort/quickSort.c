#include <stdio.h>

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void show(int *arr, int size){
  for(int i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void quickSort(int *arr, int x, int y){
  int start = x;
  int finish = y;
  int pivot = y;

  if(start < finish){
    while(start < finish){
      while(arr[start] <= arr[pivot]) start++;
      while(arr[finish] > arr[pivot]) finish--;
      if(start < finish) swap(&arr[start], &arr[finish]);
    }
    show(arr, 4);
    swap(&arr[finish], &arr[pivot]);
    show(arr, 4);
    printf("\n");

    quickSort(arr, 0, finish - 1);
    quickSort(arr, finish + 1, y);
  }else return;
}

int main(){
  int angka[] = {3, 5, 1, 4};
  int sizeAngka = sizeof(angka)/sizeof(int);
  

  quickSort(angka, 0, sizeAngka - 1);
  //printf("Maximum Value: %d", max);
  
  return 0;
}
