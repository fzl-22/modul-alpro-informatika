#include <stdio.h>

int multiply(int x, int n){
    if(n > 0) return x + multiply(x, n - 1);
    else return 0;
}

int main(){
    int result = multiply(0, 0);
    printf("Hasilnya adalah %d", result);
    return 0;
}