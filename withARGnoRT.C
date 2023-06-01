#include <stdio.h>

void fn(int,int);

void fn(int x, int y) {
    printf("sum is %d",x+y);
}

int main() {
    int a, b;
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    fn(a,b);
    return 0;
}