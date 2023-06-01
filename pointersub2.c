#include<stdio.h>
int main(void) {
    int d;
    int a[]={50,1,-1,10,11};
    int *p=&a[0];
    int *q=&a[4];

    d=p-q;
    printf("they are %d elements apart\n",d); // 4 or -4
    *q=25;
    printf("10 will be swapped with %d\n",*q); // 25
    d=q-p;
    printf("they are %d elements apart\n",d); // 4
    *p=27;
    printf("50 will be replaced with %d\n",*p); // 27
    q=q-3;
    printf("q now holds address of %d\n",*q); // 1
    p=p+3;
    printf("p now holds address of %d\n",*p); // 10
    d=p-q;
    printf("they are now %d elements apart",d); // 2


    return 0;
}