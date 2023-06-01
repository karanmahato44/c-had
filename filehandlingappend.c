#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *ptr = NULL;
    ptr = fopen("append.txt","a");
    char str[100];

    if(ptr == NULL) {
        printf("Error!");
        exit(1);
    }
    else {
        printf("What do you want to append?");
        fgets(str, 100, stdin);
        fprintf(ptr,"\n%s",str);
        printf("Sucessfully appended!");
        fclose(ptr);
    }
    return 0;
}