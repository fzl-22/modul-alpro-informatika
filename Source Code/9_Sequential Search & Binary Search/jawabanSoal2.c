#include <stdio.h>

int main(){
    char kalimat[] = "apa kabar semuanya, apakah semuanya baik baik saja";
    int panjang = sizeof(kalimat)/sizeof(char);
    for(char a = 'a'; a <= 'z'; a++){
        int counter = 0;
        for(int x = 0; x < panjang; x++){
            if(kalimat[x] == a){
                counter++;
            }
        }
        if(counter != 0){
            printf("huruf %c berjumlah %d\n",a,counter );
        }
    }
}