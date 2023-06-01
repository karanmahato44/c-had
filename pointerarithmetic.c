#include<stdio.h>
int main() {
    int a=10;
    int *p=&a;
    printf("%d\n",*p);
    printf("address that p holds=%x\n",p);
    p += 1;  // p+n=p+n*sizeOfDatatype // 1000 + 2 = 1000 + 2*4 (4 being size of int)
    printf("%d\n",*p);
    printf("address that p holds=%x",p);

    return 0;
}