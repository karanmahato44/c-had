#include <stdio.h>
struct foo {
    int a;
    float b;
    int c;
};

int main() {
    struct foo obj = {.b=44, .c=22, .a=55}; // this is called designated initialization of struct members
    printf("%d %f %d",obj.a, obj.b, obj.c);
    return 0;
}