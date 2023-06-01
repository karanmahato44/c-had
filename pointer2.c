#include<stdio.h>
int main(void) {
    int a=10;
    int b;

    int *p;
    p=&a;

    

    b=*p;  // value of address p

    printf("Address of a=%x\n",&a);

    printf("a=%d\n",*p);

    *p=20;

    printf("Address of a=%x\n",p);

    printf("b=%d\n",b);

    printf("New a=%d",a);
    printf("\naddress of pointer to a: %x",p);
    printf("\naddress of pointer: %x",&p);


    return 0;
}