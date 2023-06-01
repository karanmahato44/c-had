#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = NULL;
    char str[10];
    fp = fopen("rplusmode.txt","r+"); // r+ is for updateing from the line beginning by default
    // both read and write but won't create new if file is absent
    // og text "this is nice"
    // update will be "lmao is nice"
    if(fp == NULL) {
        printf("error!");
        exit(1);
    }
    // else {
    //     while(!feof(fp)) {
    //         fgets(str,10,fp);
    //         printf("%s",str);
    //     }
        fputs("lmao",fp);
        fclose(fp);
    return 0;
    }