#include<stdio.h>
#include<string.h>
int main() {
    char s1[20];
    printf("enter a string: ");
    scanf("%s",s1);
    strrev(s1);
    printf("\n%s",s1);
    return 0;
}