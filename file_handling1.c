#include <stdio.h>

int main() {
    FILE *fp = NULL;
    char string[20] = "foobar2000";
    float f = 44.444444;
    fp = fopen("filehandling.txt","w"); // if file doesn't exist it will create one? , it does
    if(fp == NULL) {
        printf("No file, File error");
    }
    else {
        // fputs("this is some text",fp);
        fprintf(fp,"%s\n%f",string,f);
        fclose(fp);

    }
    return 0;
}