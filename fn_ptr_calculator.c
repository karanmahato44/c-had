#include <stdio.h>  // array of function pointer

void sum(int a, int b) {
    printf("sum: %d",a+b);
}

void sub(int a, int b) {
    printf("sub: %d",a-b);
}

void mul(int a, int b) {
    printf("mul: %d",a*b);
}

void div(int a, int b) {
    printf("div: %d",a/b);
}

void rem(int a, int b) {
    printf("remainder: %d",a%b);
}


int main() {
    int choice, a, b;
    void (*fnptr[]) (int, int) = {&sum, &sub, &mul, &div, &rem}; // array of function pointer
    printf("Enter a choice; \n0 for sum, 1for sub, 2for mul, 3for div, 4for rem: ");
    scanf("%d",&choice);

    printf("\nEnter a: "); scanf("%d",&a);
    printf("\nEnter b: "); scanf("%d",&b);

    (*fnptr[choice])(a,b);
    return 0;
}