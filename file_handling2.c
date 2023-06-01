/* #include <stdio.h> // using fgetc

int main() {
    FILE *fptr = NULL;
    char ch;
    fptr = fopen("file_handling2.txt","r");

    if (fptr == NULL) {
        printf("Error!");
    }
    else {
        while(!feof(fptr)) { // feof == end of file, no == 0(false)
        ch = fgetc(fptr);
        printf("%c",ch);
        }
        fclose(fptr)
    }
    return 0;
}
 */


#include <stdio.h> // using fgets
int main() {
    FILE *fp = NULL;
    fp = fopen("file_handling2.txt","r");
    char str[100];
    if(fp == NULL)
        printf("Error!");
    else {
        while(!feof(fp)) {
            fgets(str,10,fp); 
            printf("%s",str);
            // buffer overflow? str[] size is just 100?
            // only reads one line, till specified
            // IMP stops on line break or till end of line string(if 44 specified but only 4 in arr, then it will stop after 4th)
            // say for 4, 3 chars and one null char \0
            // even works if for out of buffer value? like 44 but buffer/array size is just 10?
        }
        fclose(fp);
    }
    return 0;
}