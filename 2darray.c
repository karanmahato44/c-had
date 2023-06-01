#include<stdio.h>
int main() {
    int i,j,sum=0;
    int arr[2][3];
    for(i=0; i<2; ++i) {
        for(j=0; j<3; ++j) {
        printf("enter index[%d][%d] element: ",i,j);
        scanf("%d",&arr[i][j]);
            }
    }

    for(i=0; i<2; ++i) {
        for(j=0; j<3; ++j) {
            printf("%d\t",arr[i][j]);
            sum=sum+arr[i][j];
        }
        printf("\n");
    }
    printf("sum is %d", sum);
    return 0;
}