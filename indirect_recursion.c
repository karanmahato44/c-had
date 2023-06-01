#include <stdio.h>
int fn1(int);
int fn2(int);

int fn1(int n) {
    if(n<=1)
        return 1;
    else
        return n * fn2(n-1);
}

int fn2(int n) {
    if(n<=1)
        return 1;
    else
        return n * fn1(n-1);
}

int main() {
    printf("%d",fn1(5));
    return 0;
}