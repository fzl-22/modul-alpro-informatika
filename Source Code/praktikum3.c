#include <stdio.h>

int main() {
  int nilai;
  printf("Masukkan nilai: ");
  scanf("%d", &nilai);

  if(nilai > 80 && nilai <= 100) {
    printf("Predikat A\n");
    if (nilai == 100){
      printf("Selamat! mahasiswa mendapat nilai full\n");
    }else if (nilai == 99){
      printf("Selamat! Nilai mahasiswa nyaris sempurna\n");
    }else {
      printf("selamat!\n");
    }
  } else if(nilai > 70 && nilai <= 80) {
    printf("Predikat B\n");
  } else if(nilai > 60 && nilai <= 70) {
    printf("Predikat C\n");
  } else if(nilai > 50 && nilai <= 60) {
    printf("Predikat D\n");
  } else if(nilai >= 0 && nilai <= 50) {
    printf("Predikat E\n");
  } else {
    printf("Nilai tidak valid\n");
  }

  printf("Program telah selesai dijalankan");
  return 0;
}