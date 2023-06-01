#include<stdio.h>
int main(void) {
    int i, j, a[4][3], rowsum, colsum;
    for(i=0; i<4; ++i) {
        for(j=0; j<3; ++j) {
            printf("Enter index[%d][%d] element: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
// display mat
printf("\nMatrix is: \n\n");
for(i=0; i<4; ++i) {
        for(j=0; j<3; ++j) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

// summing (row and col are unequal)
for(i=0; i<4; ++i) {
        rowsum=0, colsum=0;
        for(j=0; j<3; ++j) {
            rowsum = rowsum + a[i][j];
        }
        printf("\nSum of row %d: %d",i,rowsum);

        for(j=0; j<4; ++j) {
            colsum = colsum + a[j][i];
        }
        printf("\nSum of column %d: %d",i,colsum);
    }

    return 0;
}