#include <stdio.h>
int main() {
    int *p=NULL; // 0 is allowed to but it's not as in int
    printf("%d\n",p);
    // printf("%d\n",*p); // seg fault // // null pointer cannot be dereferenced cz it is not point to any valid object???

    if(p == NULL)
        printf("kek");
    else
        printf("not kek");
    return 0;
}