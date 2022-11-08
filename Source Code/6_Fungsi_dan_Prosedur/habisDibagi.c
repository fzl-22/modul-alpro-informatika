#include <stdio.h>

void habisDibagi(int n1, int n2, int n3){
    int hasilKelipatan = 1, kelipatan = 1, counter = 0;
    while(hasilKelipatan <= 100){
        hasilKelipatan = kelipatan*n1;
        if(hasilKelipatan % n3 == 0 && hasilKelipatan % n2 != 0){
            printf("%d ", hasilKelipatan);
            counter++;
        }
        kelipatan++;
    }
    printf("\n%d\n", counter);

}

int main(){
    int n1, n2, n3;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    habisDibagi(n1, n2, n3);
    return 0;
}