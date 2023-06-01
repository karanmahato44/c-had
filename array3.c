#include<stdio.h>
int main(void) {
    int i;
    int arr[100];
    for(i=0; i<100; ++i) {
        if(i<50) 
            arr[i]=0;
        else
            arr[i]=1;
    }

    for(i=0; i<100; ++i) {
        printf("%d ",arr[i]);
    }
    return 0;
}