#include <stdio.h>

int main(){
    float UTS, UAS, PR, Tubes;
    printf("Masukkan nilai UTS: ");
    scanf("%f", &UTS);
    printf("Masukkan nilai PR: ");
    scanf("%f", &PR);
    printf("Masukkan nilai Tubes: ");
    scanf("%f", &Tubes);

    UAS = (7500 - 35*UTS - 10*PR - 20*Tubes)/35;

    if(UAS >= 0 && UAS <= 100) printf("Nilai UAS minimum yang diperlukan adalah %.2f", UAS);
    else printf("Tuan Forger tidak mungkin untuk mendapatkan nilai A %.2f", UAS);

    return 0;
}