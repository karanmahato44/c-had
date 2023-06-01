#include<stdio.h>
void main() {
    int n;
    again:
    printf("enter num: ");
    scanf("%d",&n);
    if(n<0) {

        printf("num is -ve, enter num again\n");
        goto again;
    }
    else
    printf("+ve, good day!");

}