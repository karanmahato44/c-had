#include <stdio.h>

void f(int *, int);
void f(int *p, int m) {
    m=m+5;
    *p=*p+m;
}

int main() {
    int i=5;
    int j=10;
    f(&i,j);
    printf("%d",i+j);
    return 0;
}