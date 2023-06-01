#include <stdio.h>

void fn(void);

void fn() {
    int a=1, b=2, x=0;
    x=a+b;
    printf("%d\n",x);
}

void main() {
    fn();
}