/*
1
23
456
78910
*/

#include<stdio.h>
int main(void) {
    int i,j,num=1,rows;
    printf("how many rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;++i) {
        for(j=1;j<=i;++j) {
            printf("%d ",num++); // yes post increment
        }
        printf("\n");
    }
    return 0;
}