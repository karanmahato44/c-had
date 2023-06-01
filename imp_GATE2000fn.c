#include <stdio.h>
int incr(int);
int incr(int i) {
    static int count=0; // static var initialized only once, holds val throughout till main termination, has global scope
    count = count + i;
}

int main() {
    int i,j;
    for(i=0; i<=4; ++i)
        j=incr(i);
    printf("%d",j); // 10
    return 0;
}