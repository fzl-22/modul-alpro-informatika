#include <stdio.h>

int rekursif(int x){
    if (x > 1){ // --> Recursive Case (kondisi yang apabila bernilai true akan memanggil dirinya sendiri)
        printf("%d ", x);
        return rekursif(x - 1); 
    }
}

void perulangan(int x){
    while(x > 0){
        printf("%d ", x);
        x--;
    }
}

int faktorial(int x){
    if(x > 1){
        return x * faktorial(x - 1);
    }else{
        return 1;
    }
}

int main(){
    //rekursif(10);
    // int x = rekursif(10);
    // printf("\nx = %d", x);
    // printf("\n\n");
    // perulangan(10);
    printf("faktorial  = %d",faktorial(5));
}