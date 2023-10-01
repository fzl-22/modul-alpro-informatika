#include <stdio.h>

int main()
{
    int arrayLenght = 7; //menyimpan nilai panjang array
    
    int data[7] = {1,3,6,8,11,15,20};
    
    int search = 15; //data yang ingin dicari
    
    /*deklarasi key, low, dan high
    - key  -> index tengah yang digunakan untuk mencari nilai
    - low  -> batasan pada sisi kiri pada key
    - High -> batasan pada sisi kanan pada key
    */
    int low = 0;
    int high = arrayLenght-1;
    int key = (low + high)/2;
    
    while(1){
        int key = (low + high)/2;
        if(data[key] == search){   // nilai index key sama dengan nilai yang dicari
            printf("Data %d berada di index %d",data[key], key);
            break;
        }else if(low == high){   // nilai yang dicari tidak ada dalam array
            printf("Data tidak ditemukan");
            break;
        }
        else if (search > data[key]){ //nilai yang dicari berada di sisi kanan
            low = key + 1;
        }
        else{                  //nilai yang dicari berada di sisi kiri
            high = key - 1;
        }
    }
    return 0;
}