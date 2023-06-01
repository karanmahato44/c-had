#include <stdio.h>

char *display();
char *display() {
    return "kappa";
}

int main() {
    char *value;
    value = display();
    printf("string is: %s",value);
    return 0;
}