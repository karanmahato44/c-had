#include<stdio.h>
int main(void) {
    int a=44;
    float pi=3.14;

    int c;

    int *p;
    p=&a;
    float *q=&pi;

    c=*p;

    *p=20;


    printf("value of a is: %d",*p);
    printf("\naddress of a is: %x",p);

    printf("\nvalue of c: %d",c);
    printf("value last: %d",a);

// WIP
    return 0;
}