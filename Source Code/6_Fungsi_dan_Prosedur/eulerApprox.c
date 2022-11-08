#include <stdio.h>

unsigned long long int fact(int n_fact){
    unsigned long long int result = 1;
    if(n_fact > 0) for(int i = 1; i <= n_fact; ++i) result = result*i;
    else if(n_fact == 0) result = 1;
    return result;
}

double eulerApprox(int n){
    double result = 0;
    for(int i = 0; i <= n; i++){
        result = (1.0/fact(i)) + result;
    }
    return result;
}

int main(){
    int N;
    scanf("%d", &N);
    double approximationResult = eulerApprox(N);
    printf("%.48f\n", approximationResult);
    return 0;
}