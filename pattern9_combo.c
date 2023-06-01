/*

*
**
***
****
*****
****
***
**
*

*/
#include<stdio.h>
int main(void) {
    int i,j,rows;
    printf("no of top py rows?: ");
    scanf("%d",&rows);
    for(i=1; i<=rows; ++i) {
        for(j=1; j<=i; ++j) {
            printf("*");
        }
    printf("\n");
    }

    for(i=rows-1; i>=1; --i) {
        for(j=1; j<=i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}