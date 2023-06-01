#include<stdio.h>
int main(void) {
    int i,j,k,sum;
    int a[3][3]={{1,2,3},{3,2,1},{4,5,6}};
    int b[3][2]={{1,2},{2,2},{4,4}};
    int mulmat[3][2];

    // print mat1
    printf("\nmat1 is: \n");
    for(i=0; i<3; ++i) {
        for(j=0; j<3; ++j) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    // print mat2
    printf("\nmat2 is: \n");
    for(i=0; i<3; ++i) {
        for(j=0; j<2; ++j) {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    // multiply
    printf("\n mat mul is: \n");
    for(i=0; i<3; ++i)
    {
        for(j=0; j<2; ++j)
        {
            sum=0;
            for(k=0; k<3; ++k) 
            {
                sum = sum + (a[i][k] * b[k][j]);
            }
            mulmat[i][j] = sum;
            printf("%d\t",mulmat[i][j]);
        }
        printf("\n");
    }


    return 0;

}