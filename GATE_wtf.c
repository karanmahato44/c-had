#include <stdio.h>

int r(void);

int r() {
    static int num=7;
    return num--;
}
int main() {
    for( r(); r(); r() )
        printf("%d",r()); // 52
    return 0;
}