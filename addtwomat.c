#include<stdio.h>
int main() {
    int i, j;
    int a[2][3], b[2][3], sum[2][3];
    
    // first mat

    for(i=0; i<2; ++i) {
        for(j=0; j<3; ++j) {
            printf("enter mat1 index[%d][%d] element: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    // print first mat

            printf("\nfirst matrix is: \n\n");
    for(i=0; i<2; ++i) {
        for(j=0; j<3; ++j) {
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }

    // second mat

    for(i=0; i<2; ++i) {
        for(j=0; j<3; ++j) {
            printf("enter mat2 index[%d][%d] element: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    // print second mat

            printf("\nsecond matrix is: \n\n");
    for(i=0; i<2; ++i) {
        for(j=0; j<3; ++j) {
            printf("%d\t",b[i][j]);

        }
        printf("\n");
    }

    // for sum mat

    printf("\nsum of the above two matx is: \n\n");

    for(i=0; i<2; ++i) {
        for(j=0; j<3; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}