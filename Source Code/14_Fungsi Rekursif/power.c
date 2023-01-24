#include <stdio.h>

int power(int a, int n){
    if(n > 0){
        return a*power(a, n - 1);
    }else if(n == 0){
        return 1;
    }
}

int main(){
    int result = power(5, 4);

    printf("Hasilnya adalah %d", result);
    return 0;
}