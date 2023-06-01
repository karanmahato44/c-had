#include<stdio.h>
int main(void) {
    int i=0;
    do {
        printf("nice");
        ++i;
    }while(i<1);
    puts("\nout of time!");
    return 0;
}