#include <stdio.h>

int* fn(int []);

int* fn(int a[]) { // here a[ ] is not array per say, it is acting as a pointer // int *a - compiler thing
    a = a + 2;
    return a;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int *p;
    p = fn(a);
    printf("%d",*p);
    return 0;
}