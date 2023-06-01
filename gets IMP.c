#include<stdio.h>
int main(void) {
    char str[10];
    printf("enter a string: ");
    gets(str);
    printf("string=%s",str);
    return 0;
}