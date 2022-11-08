#include <stdio.h>
#include <stdbool.h>

int main(){
    int N;
    bool isNyala = false;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++){
        if(N % i == 0){
            if(isNyala == false) isNyala = true;
            else isNyala = false;
        }
    }
    if(isNyala == true) printf("lampu menyala\n");
    else printf("lampu mati\n");
    return 0;
}