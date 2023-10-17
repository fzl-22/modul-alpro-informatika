#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double s, luas;

    printf("masukan panjang sisi a:\n");
    scanf("%lf", &a);
    printf("masukan panjang sisi b:\n");
    scanf("%lf", &b);
    printf("masukan panjang sisi c:\n");
    scanf("%lf", &c);

    s = (a+b+c) / 2;
    
    luas = sqrt(s * (s-a) * (s-b) * (s-c));
    
    printf("luas segitiga abc adalah: %.2lf\n",luas);
    return 0;
}