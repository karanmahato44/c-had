#include<stdio.h>
int main() {
    int a=10, b=20;
    int *p, *q;
    p=&a;
    q=&b; // if this is not initialized then seg. fault will occur
    // q=p; // accessing the pointers 

    *q=*p; // accessing the values
    printf("%d\n%d\n%d",*p,b,*q);
    return 0;
}