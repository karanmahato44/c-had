#include <stdio.h>
void display() {
    extern int x;
    ++x; // yes can do this 
    printf("hello from support!\n");
    printf("%d",x);

}