#include <stdio.h>

void swap(char *kalimat1, char *kalimat2, int x)
{
    char tmp;
    for (int a = x; a < 10; a++)
    {
        tmp = *(kalimat1 + a);
        *(kalimat1 + a) = *(kalimat2 + a);
        *(kalimat2 + a) = tmp;
    }
}

int main()
{
    char kalimat1[11] = "ABCDE12345";
    char kalimat2[11] = "12345XXXXX";
    printf("%s dan %s\n", kalimat1, kalimat2);
    swap(kalimat1, kalimat2, 2);
    printf("%s dan %s\n", kalimat1, kalimat2);
}
