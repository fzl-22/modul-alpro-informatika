#include <stdio.h>

void asc(int n){
    if(n > 0){
        asc(n - 1);
        printf("%d ", n);
    }else return;
}

int main(){
    asc(0);
    return 0;
}