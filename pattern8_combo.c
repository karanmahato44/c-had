#include<stdio.h>
int main(void) {
    int i, j, space, rows;
    printf("how many rows of top py: ");
    scanf("%d",&rows);

// for top py with bottom rows+1 rows

    for(i=1; i<=rows; ++i) {
        
        for(space=1; space<=(rows-i); ++space) {
            printf(" ");
        }

        for(j=1; j<=(2*i-1); ++j) {
            printf("*");
    }

    printf("\n");

    }


// for bottom py with top rows-1 rows

    for(i=rows-1; i>=1; --i) {

        for(space=1; space<=(rows-i); ++space) {
            printf(" ");
        }

        for(j=1; j<=(2*i-1); ++j) {
            printf("*");
        }

    printf("\n");

    }
    return 0;
}