/*
1
12
123
1234
123456
*/
#include<stdio.h>
int main(void) {
    int i,j,rows;
    printf("how many rows?: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;++i) {
        for(j=1;j<=i;++j) {
            printf("%d",j);
        }
        printf("\n");
    }
}