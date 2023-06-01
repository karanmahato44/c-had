#include<stdio.h>
int main(void) {
    int a[2][3], i, j;

    for(i=0; i<2; ++i) {
        for(j=0; j<3; ++j) {
            printf("Enter index[%d][%d] element: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nMatrix is: \n");

        for(i=0; i<2; ++i) {
        for(j=0; j<3; ++j) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of the matrix is: \n");

    for(i=0; i<3; ++i) {
        for(j=0; j<2; ++j) {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}