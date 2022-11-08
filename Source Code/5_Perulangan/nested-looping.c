#include <stdio.h>

int main(){
    // for(int a = 0; a < 3; a++){
    //     printf("ini adalah angka a : %d\n",a);
    //     for(int b = 0; b < 3; b++){
    //         printf("    ini adalah angka b : %d\n",b);
    //     }
    // }

    // for(int i = 1; i < 4; i++){
    //     for(int j = 1; j < 4; j++){
    //         for(int k = 1; k < 4; k++){
    //             printf("(i=%d, j=%d, k=%d)\n", i, j, k);
    //         }
    //     }
    // }

    for(int i = 1; i < 4; i++){
        for(int j = i + 1; j < 4; j++){
            for(int k = j + 1; k < 4; k++){
                printf("(i=%d, j=%d, k=%d)\n", i, j, k);
            }
        }
    }
    return 0;
}