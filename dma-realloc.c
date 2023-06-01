// realloc extends to the original block still keeping the previous elements at respective indexes
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, num, *ptr1, *ptr2;

    printf("For ptr1\n");
    printf("How many to store at first? ");
    scanf("%d",&num);
    ptr1 = (int *)calloc(num,sizeof(int));

    for(i=0; i<num; ++i) {
        printf("Enter index %d element: ",i);
        scanf("%d",(ptr1+i));
    }

    // now i want to store more than og num
    printf("\nEnter new num value: ");
    scanf("%d",&num);
    ptr2 = (int *)realloc(ptr1,num*sizeof(int));

    // new allocated  space elements will be initialized with zero 0

    printf("\nFinal elements are: ");
        for(i=0; i<num; ++i) {
        printf("%d ",*(ptr2+i));
    }


    printf("\nAddress that ptr1 points: %d & ptr2: %d",ptr1,ptr2); // same for the most part only diff in case of out of mem and new block is created, values are copied over from old one and old one is freed
    free(ptr2);
    printf("\n%d",ptr2);
    printf("\n%d",*ptr2); // random val
    ptr2 = NULL;
    printf("\n%d",ptr2);
    printf("\n%d",*ptr2); // seg fault, cant deref NULL
    return 0;
}