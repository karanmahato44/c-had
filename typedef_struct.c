#include <stdio.h>
typedef struct student {
    int roll;
    float marks;
    char name[];
}mytype; // so basically an alias

int main() {
    mytype obj;
    obj.roll = 44;
    printf("%d",obj.roll);
    return 0;
}