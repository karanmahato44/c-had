#include <stdio.h>

float fn(void);

float fn() {
    float x=11, y=22;
    puts("nice");
    return x+y;
    puts("nice again"); // unreachable code/statement

}

void main() {
    float res;
    res=fn();
    printf("%f",res);
}