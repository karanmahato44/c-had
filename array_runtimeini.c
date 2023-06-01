#include<stdio.h>
int main(void) {
    int i;
    int arr[5];
    for(i=0; i<5; ++i) {
    printf("enter index[%d] element: ",i);
        scanf("%d",&arr[i]);
    }

    printf("\ndisplaying arr elements!\n");
    for(i=0; i<5; ++i) {
        printf("%d ",arr[i]);
    }

    return 0;
}