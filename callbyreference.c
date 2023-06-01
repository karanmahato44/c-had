#include <stdio.h>

void fn(int *, int *);

void fn(int *a, int *b) {
    *a=44;
    *b=55;
    printf("a=%d,b=%d\n",*a,*b);

}


int main() {
    int a=10, b=20;
    fn(&a,&b);
    printf("a=%d,b=%d",a,b);
    return 0;
}