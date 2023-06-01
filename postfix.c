#include<stdio.h>
int main() {
    int x=4;
    printf("x1=%d\t",x);
    printf("x2=%d\t",x++);

    printf("x3=%d\t",x);

    printf("x4=%d\t",x--);
    printf("x5=%d",x);


// so ans should be  4 4 5 5 4
    return 0;
}