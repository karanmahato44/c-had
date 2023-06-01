#include<stdio.h>
int main(void) {
    char ch;
    printf("enter a char: ");
    ch = getchar();
    putchar(ch);
    printf("\nkek1");
    putchar('\n');
    putch('n'); //same thing as putchar() but is defined in conio.h
    puts("\nkek");
    return 0;
}