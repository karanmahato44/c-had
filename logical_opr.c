#include<stdio.h>
int main() {
    int a=10,b=5,value,not;
    value=(a>=b)||(b>a);
    not=!(a==10);
    printf("%d",value);
    printf(" %d",not);

    return 0;
}