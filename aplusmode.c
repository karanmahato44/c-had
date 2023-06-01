#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    fp = fopen("aplusmode.txt","a+"); // append/read, creates a new file if not present
    char ch;
    if(fp == NULL) {
        printf("error");
        exit(1);
    }
    else {
        fputs(" kek",fp);
        fclose(fp);

    }
    return 0;
}