#include <stdio.h>

int main(){
    // int a = 10;
    // while(a < 10){
    //     printf("ini adalah angka : %d\n", a);
    //     a++;
    // }
    int num;
    char apakahGanteng;
    // printf("Masukkan angka: ");
    // scanf("%d", &num);
    // printf("Apakah Faisal ganteng: ");
    // getchar();
    // scanf("%c", &apakahGanteng);
    do{
        printf("Masukkan angka: ");
        scanf("%d", &num);
        printf("Apakah Faisal ganteng: ");
        getchar();
        scanf("%c", &apakahGanteng);
    }while(num % 2 != 0 && apakahGanteng == 'y');
    // int a = 10;
    // while(a >= 0){
    //     printf("ini adalah angka : %d\n",a);
    //     a--;
    // }

    // for(int a = 10; a >= 0; a--){
    //     printf("ini angka : %d\n",a);
    // }
    return 0;
}