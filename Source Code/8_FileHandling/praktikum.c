#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *FileBaru;

    char inputUser[50];
    FileBaru = fopen("namafile.txt","w");
    scanf("%[^\n]s", inputUser);
    fprintf(FileBaru, "%s", inputUser); // Struktur : fprintf(VariabelFile, "format Specifier", "input");
    fclose(FileBaru);

	return 0;
}