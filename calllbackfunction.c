#include <stdio.h>

void sum(int, int);
void sub(int, int);

void sum(int a, int b) {
    printf("sum: %d",a+b);
}

void sub(int a, int b) {
    printf("\nsub: %d",a-b);
}

void display(void (*fnptr)(int, int) ) {
    (*fnptr)(44,4); // * operator can be skipped ie fnptr(44,4)
}


int main() {
    display(&sum);
    display(&sub); // & operator can be skipped
    return 0;
}