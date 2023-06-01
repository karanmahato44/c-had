#include <stdio.h>
int main() {
    int a=44;
    float b=3.14;
    char ch='k';

    void *p;
    
    p=&a;
    printf("%d\n",*(int *)p); // typecasting is necessary

    p=&ch;
    printf("%c\n",*(char *)p);
    
    p=&b;
    printf("%f\n",*(float *)p);

    return 0;
}