/*
123456
12345
1234
123
12
1
*/
#include<stdio.h>
int main(void) {
    int i,j,rows;
    printf("how many rows?: ");
    scanf("%d",&rows);
    for(i=rows;i>=1;--i) {
        for(j=1;j<=i;++j) {
            printf("%d",j);
        }
    printf("\n");
    }
}