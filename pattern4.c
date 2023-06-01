/*
    *
   **
  ***
 ****
*****
*/
#include<stdio.h>
int main(void) {
    int i,j,rows;
    printf("how many rows: ");
    scanf("%d",&rows);
    for(i=0; i<rows; ++i) {
        for(j=0; j<rows; ++j) {
            if((i+j)<rows)
                printf(" ");
            else
                printf("*");
        }
    printf("\n");
    }
    return 0;
}