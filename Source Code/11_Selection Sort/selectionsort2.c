#include <stdio.h>

int main()
{
    int n;
    printf("Masukkan banyak tim : ");
    scanf("%d", &n);
    char namaTim[n][100];
    int skor[n][3];
    int totalSkor[n][2];
    for (int a = 0; a < n; a++)
    {
        printf("Masukkan Nama Tim : ");
        scanf("%s", &namaTim[a]);
        printf("Masukkan Skor Tim %s : ", namaTim[a]);
        scanf("%d %d %d", &skor[a][0], &skor[a][1], &skor[a][2]);
        totalSkor[a][1] = skor[a][0] + skor[a][1] + skor[a][2];
        totalSkor[a][0] = a;
    }
    // diurutkan
    int min, tmp;
    for (int a = 0; a < n; a++)
    {
        min = a;
        for (int b = a; b < n; b++)
        {
            if (totalSkor[b][1] > totalSkor[min][1])
            {
                min = b;
            }
        }
        tmp = totalSkor[a][1];
        int tmp2 = totalSkor[a][0];
        totalSkor[a][1] = totalSkor[min][1];
        totalSkor[a][0] = totalSkor[min][0];
        totalSkor[min][1] = tmp;
        totalSkor[min][0] = tmp2;
    }
    printf("\n");
    for (int a = 0; a < n; a++)
    {
        printf("%s %d %d %d %d\n", namaTim[totalSkor[a][0]], skor[totalSkor[a][0]][0], skor[totalSkor[a][0]][1], skor[totalSkor[a][0]][2], totalSkor[a][1]);
    }
}