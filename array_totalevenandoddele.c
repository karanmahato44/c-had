#include<stdio.h>
int main(void) {
    int i, even=0, odd=0;
    int arr[10];
    for(i=0; i<10; ++i) {
        printf("Enter element at index[%d]: ",i);
        scanf("%d",&arr[i]);

        if(arr[i]%2==0)
            ++even;
        else
            ++odd;
    }
    printf("no of even elements = %d",even);
    printf("\nno of odd elements = %d",odd);
    return 0;
}