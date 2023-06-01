#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int i;
    int num;

    printf("how many num do you want to store? ");
    scanf("%d",&num);
    
    ptr = (int *)malloc(num*sizeof(int));


    for(i=0; i<num; ++i) {
        printf("enter index %d num: ",i);
        scanf("%d",(ptr+i)); // poiter arithmetic
    }

    printf("elements are: ");
    for(i=0; i<num; ++i) {
        printf("%d ",*(ptr+i));
    }
    free(ptr);// don't forget
    return 0;
}