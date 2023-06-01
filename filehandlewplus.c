#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = NULL;
    char ch;
    fp = fopen("wplus.txt","w+"); // reading is pointless since content will be wiped as it's loaded(into buffer ?, or file is accessed, pointed to)
    if(fp == NULL) {
        printf("error");
        exit(1);
    }
    else {
        fputs("hello",fp);
        rewind(fp);
        while(!feof(fp)) {
            ch = fgetc(fp);
            printf("%c",ch);
        }
        fclose(fp);
    }
    return 0;
}