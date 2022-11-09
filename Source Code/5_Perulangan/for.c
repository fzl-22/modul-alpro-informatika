#include<stdio.h>
#include<stdbool.h>

int main(){
    int N;
    scanf("%d", &N);
    bool lampu = false;
    for(int i = 1; i <= N; i++){
        if(N % i == 0){
            if(lampu) lampu = false;
            else lampu = true;
        }
    }

    printf("\n%d\n", lampu);
    printf("\n");
}