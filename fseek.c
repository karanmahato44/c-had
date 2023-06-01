#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = NULL;
    fp = fopen("fseek.txt","r");
    char ch;
    char ch2;
    if(fp == NULL) {
        printf("Error!");
        exit(1);
    }
    else {
        // fp(ptr, offset, origin/position from)
        fseek(fp, +4, SEEK_SET); // SEEK_SET is for from beginning, and fp initially is at index 0 or starting, count after the first one as 1, 2, 3 ...
        //while(!feof(fp)) {
            ch = fgetc(fp); // AFTER (as in post decrement) fgetc() cursor moves a step forward
            printf("%c ",ch); // VIMP will give M, but cursor(fp) will move to o, that's after M

            // ch = fgetc(fp); 
            // printf("%c ",ch);

            fseek(fp, -5, SEEK_CUR); // AFTER (as in post decrement) fgetc() cursor moves a step forward
            ch2 = fgetc(fp); 
            printf("%c ",ch2);


            fseek(fp, -4, SEEK_END); // seek_end from the end, ie after the last char ie from the \0, ie last char will count as 1, 2, ... from r to l
            ch2 = fgetc(fp); 
            printf("%c ",ch2);
        //}
        fclose(fp);
    }
    return 0;
}