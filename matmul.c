#include<stdio.h>
#define N 50
int main() {
    int i, j, k, a[N][N], b[N][N], mul[N][N], m, n, p, q, sum;

    // taking first mat

    printf("enter the no of rows and columns of first matrix: ");
    scanf("%d%d",&m,&n);
    for(i=0; i<m; ++i) {
        for(j=0; j<n; ++j) {
            printf("enter index[%d][%d] element: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    // taking second mat

    printf("enter the no of rows and columns of second matrix: ");
    scanf("%d%d",&p,&q);
    for(i=0; i<p; ++i) {
        for(j=0; j<q; ++j) {
            printf("enter index[%d][%d] element: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    // print first mat
    printf("\n first matrix is: \n");
    for(i=0; i<m; ++i) {
        for(j=0; j<n; ++j) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    // print second mat
    printf("\n second matrix is: \n");
    for(i=0; i<p; ++i) {
        for(j=0; j<q; ++j) {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    // mat mul

    // check if matx can be multiplied or not

    if(n!=p) {
        printf("can not multiply matrixes");
    }

    else {
        for(i=0; i<m; ++i) {
            for(j=0; j<q; ++j) {
            sum = 0;
                for(k=0; k<n; ++k) {
                    sum += a[i][k] * b[k][j];
                }
                mul[i][j] = sum;
            }
        }

    // print mul
    printf("\nmat mul is: \n");

    for(i=0; i<m; ++i) {
        for(j=0; j<q; ++j) {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }

    }

    return 0;
}