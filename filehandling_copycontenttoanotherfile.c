#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("copy.txt","r");
    if(fp1 == NULL) {   
        printf("error");
        exit(1);
    }
    fp2 = fopen("copy_destination.txt","w");
    if(fp2 == NULL) {
        printf("error");
        exit(1);
    }

    while((ch = fgetc(fp1)) != EOF) {
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}