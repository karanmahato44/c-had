#include<stdio.h>
#include<string.h>
int main(void) {
    char s1[10]="hello";
    char s2[10]="world";
    int value;
    value=strcmp(s1,s2);
    if(value==0)
        printf("strings are same\n");
    else
        printf("strings are different\n");

    printf("value is: %d\n",value);

    return 0;
}