/*

A
AB
ABC
ABCD
ABCDE
ABCDEF
......
*/
#include<stdio.h>
int main(void) {
    int i,j,rows;
    printf("no of rows?: ");
    scanf("%d",&rows);
    for(i=1; i<=rows; ++i) {
        for(j=1; j<=i; ++j) {
            printf("%c",64+j);
        }
    printf("\n");
    }
return 0;
}