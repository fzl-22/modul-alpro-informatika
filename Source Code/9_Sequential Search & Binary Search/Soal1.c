#include <stdio.h>

typedef struct pair{
    int first, second;
} pair;

pair searchMultidimensionalArr(int target, int arr[3][3]){
    pair result; 
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(target == arr[i][j]){
                result.first = i;
                result.second = j;
                return result;
            }
        }
    }
    result.first = -1;
    result.second = -1;
    return result;
}

int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 7}, {8, 10, 12}};
    pair indexResult = searchMultidimensionalArr(12, arr);
    printf("Posisi di [%d][%d]", indexResult.first, indexResult.second);
}