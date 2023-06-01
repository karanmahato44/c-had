#include <string.h>
#include <stdio.h>
struct cat {
    char name[10];
    char likes[10];
}obj1, obj2 = {"dogyesdog", "food"};

int main() {
    printf("%s",obj2.likes);
    strcpy(obj2.likes,"fish"); // got from stack overflow IMP
    printf("\n%s",obj2.likes);
    return 0;
}