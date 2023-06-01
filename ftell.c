#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp = NULL;
    char str[100];
    fp = fopen("ftell.txt","r");
    if(fp == NULL) {
        printf("error");
        exit(1);
    }
    else {
        printf("fpointer is at: %d\n",ftell(fp)); // return type of ftell is long int
        fseek(fp,0,SEEK_END);// just moving the fptr to the end char(or eol)
        printf("Length of the string is: %d\n",ftell(fp)); // since the last postion is the length given by ftell
        fseek(fp,+4,SEEK_SET);
        printf("now fpointer is at: %d\n",ftell(fp));

        fscanf(fp,"%s",str); // read from file pointed by fp and store to a string var(or char array in c, here)IMP stops after it encounter newline or space
        printf("string is: %s\n",str);

        printf("lastly fpointer is at: %d",ftell(fp)); // after end of string for fscanf ie space(in this case)

        fclose(fp);
    }
    return 0;
}