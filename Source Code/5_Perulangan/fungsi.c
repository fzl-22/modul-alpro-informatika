#include <stdio.h>
#include <stdio.h>

float luasSegitiga(float alas, float tinggi){
    return (1.0/2.0)*alas*tinggi;
}

void tampilkanHasil(){
    printf("Hasil: %.2f\n", luasSegitiga(5, 5));
}

int main(){
    tampilkanHasil();
    return 0;
}