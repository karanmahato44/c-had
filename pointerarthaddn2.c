#include<stdio.h>
int main(void) {
    int a[5]={4,5,6,7,8}; // or a[]={4,5,6,7,8} too
    int *p=&a[0];   // a[0] is a[i] index 0 element cz first element address

    // or *p=a; yes only >> a << can be done too because a is name of the array and it is an internal constant pointer that holds the base address or address of the first element(ie first address of the 4 int bytes)

    printf("%d\n",*p);
    printf("address that p holds: %x\n",p);
    p++;
    printf("%d\n",*p);
    printf("address that p holds: %x\n",p);
    p += 2;
    printf("%d\n",*p);
    printf("address that p holds: %x\n",p);

    *p=44;
    printf("new val in place of 7 or index 3: %d\n",*p);
    return 0;
}

// p + n = &a[0+n]