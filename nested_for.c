/* print this or similar

******
******
******
******

*/

#include<stdio.h>
int main(void) {
    int i,j;
    for(i=1;i<=4;++i) {
        for(j=i;j>0;--j) {
            printf(" *");
        }
        printf("\n");
    }
return 0;
}