#include <stdio.h>

int main(){
    for(int i = 0; i <= 100; ++i){
        printf("%d\n", i);
        if(i == 25) continue;
        if(i == 50) break;
    }
    printf("\n");
    return 0;
}