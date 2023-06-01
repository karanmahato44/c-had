#include <stdio.h>
#include "extern_support.c"

int x = 10;
extern void display();
int main() {
    display();
    return 0;
}