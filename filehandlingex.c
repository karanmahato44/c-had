#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = NULL;
    fp = fopen("filehandlingex.txt","r");
    int counter = 1;
    char ch;
    if(fp == NULL) {
        printf("error");
        exit(1);
    }
    // '\n' itself is not EOF but it's just to go the newsline, it still is a char. the EOF means the END OF FILE, or the last char without a newline, a blank line at end so the sencond last line will still have a newline char
    while((ch = fgetc(fp)) != EOF) { /* after fgetc fp moves a char forward */
        if(ch == '\n') {
            counter++;
        }
    }
        printf("Number of lines: %d",counter);
        fclose(fp);
    return 0;
}