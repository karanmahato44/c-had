#include <stdio.h>

char* display();
char* display() {
    static char name[] = "kappa"; // stored in stack memory without the static keyword


    return name; // name of array is constant, internal pointer

    // return "kappa"; // string literal, stored in read only, static memory
}

int main() {
    char *str;
    str = display();
    str[1] = 'k';
    printf("string is: %s",str);
    return 0;
}