#include<stdio.h>
int main(void) {
    char str[20];
    puts("enter a string: "); //newline is auto added/builtin
    gets(str);
    puts(str); //newline is auto added/builtin in the end ie \n
    return 0;
}