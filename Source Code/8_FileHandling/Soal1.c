#include <stdio.h>

int main(){
    int a;
    FILE *FileBaru;
    char Inputan[1000];

    // Menulis File : 
    FileBaru = fopen("FileBaru.txt", "a");
    for(int a = 0; a < 4; a++){
        gets(Inputan);
        if(a != 0){
            fprintf(FileBaru,"\n%s",Inputan);
        }else{
            fprintf(FileBaru,"%s",Inputan);
        }
    }
    fclose(FileBaru);
    FileBaru = fopen("FileBaru.txt", "r");
    printf("\nDATA : \n");
    while(fgets(Inputan,sizeof(Inputan),FileBaru)){
        printf("%s",Inputan);
    }
    fclose(FileBaru);

}