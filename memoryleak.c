#include <stdio.h>
#include <stdlib.h>

int main() {
    int ch = 1;
    int *ptr;
    while(ch) {
        printf("mem leak demo\n");
        ptr = (int *)malloc(4400000*sizeof(int));

        printf("continue? y>>press 1: \n");
        scanf("%d",&ch);
        // free(ptr); // this will cause mem leak
    }
    return 0;
}