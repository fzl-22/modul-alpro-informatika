#include <stdio.h>
#include <stdlib.h>
#define size 5

void bubbleSort(int *arr){
   for(int i = 0; i < size - 1; i++){
      int temp;
      for (int j = 0; j < size - 1 - i; j++){
	 if(arr[j] > arr[j+1]){
	    temp = arr[j];
	    arr[j] = arr[j+1];
	    arr[j+1] = temp;
	 }
      }
   }
}

void outputNilai(int *arr){
   for(int i = 0; i < size; i++){
	printf("%d ", arr[i]);
   }
}

int main()
{
   int a[size] = {5, 7, 2, 9, 1};
   outputNilai(a);
   bubbleSort(a);
   printf("\nSorting : \n");
   for(int i = 0; i < size; i++){
        printf("%d ", a[i]);
   }
	
   return (0);
}