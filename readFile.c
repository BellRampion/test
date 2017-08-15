#include <stdio.h>

int main(){
    int i = 0;
    int j = 20;
    char ch;
    char array[20];
    FILE *fp;

    fp = fopen("textFile2.txt", "w");
    fprintf(fp, "Hello, World!\n$");
    fclose(fp);
    fp = fopen("textFile2.txt", "r");

    for (i = 0; array[1] != '\0' && i<10; i++){
        fgets(array, j, fp);
        printf("Line: %s\n", array);
    }


}
