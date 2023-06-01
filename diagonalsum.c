#include<stdio.h>
int main(void) {
    int i, j, a[3][3], dsum1=0, dsum2=0;

// read mat from user
    for(i=0; i<3; ++i) {
        for(j=0; j<3; ++j) {
            printf("Enter index[%d][%d] element: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
// display mat
printf("\nMatrix is: \n\n");
    for(i=0; i<3; ++i) {
        for(j=0; j<3; ++j) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
// sum diagonal elements L2R 
    for(i=0; i<3; ++i) {
        for(j=0; j<3; ++j) {
            if(i==j)
                dsum1 = dsum1 + a[i][j];
            if((i+j)==2)
                dsum2 = dsum2 + a[i][j];
        }
    }
    printf("Sum of diagonal elements L2R T2B = %d \n",dsum1);
    printf("Sum of diagonal elements R2L T2B = %d \n",dsum2);
    return 0;
}