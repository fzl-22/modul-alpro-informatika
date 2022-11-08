#include <stdio.h>
#include <stdbool.h>

int main(){
    long N;
    bool isNyala = false;
    scanf("%li", &N);
    for(int i = 1; i <= N; i++){
        if(N % i == 0){
            if(isNyala == true) isNyala = false;
            else isNyala = true;
        }
    }
    if(isNyala == true) printf("lampu menyala\n");
    else printf("lampu mati\n");
    return 0;
}