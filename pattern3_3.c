/*
654321
65432
6543
654
65
6
*/
#include<stdio.h>

int main() { 
    int i,j,rows;
    printf("how many rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;++i) {
        for(j=rows;j>=i;--j) {
            printf("%d",j);
        }
    printf("\n");
    }
    return 0;
}