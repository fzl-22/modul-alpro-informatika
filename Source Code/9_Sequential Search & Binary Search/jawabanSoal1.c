#include <stdio.h>
#include <stdbool.h>

void sequentialSearch(int cari, int arr[3][3]){
    bool found = false;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] ==  cari){
                printf("Nilai %d ada di index [%d][%d]\n", cari, i, j);
                found = true;
                break;
            }
        }
    }
    if(found == false) printf("Data tidak ditemukan\n");

}

int main(){
    int arr[3][3] = {{1, 2, 3}, {8, 4, 7}, {10, 0, 3}};
    sequentialSearch(7, arr);

}