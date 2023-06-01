#include <stdio.h>

int fn(int, int);

int fn(int a, int b) {
    return a+b;
}

int main() {
    int sum = 0;
    int (*ptr)(int, int); //declaration of fn pointer
    ptr = &fn;
    sum = (*ptr)(10, 20); // calling using fn pointer
    printf("%d",sum);
    return 0;
}