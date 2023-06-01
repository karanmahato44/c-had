#include<stdio.h>
#include<string.h>
int main(void) {
    char str[20];
    printf("enter string: ");
    fgets(str, 20, stdin);
    strlwr(str);
    puts(str);
    strupr(str);
    puts(str);
    return 0;
}