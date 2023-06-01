// comma acts as both separator and operator
#include<stdio.h>
int main() {
    int a, b;
    // int a=5,4; // will give error cz , is sep. here and declaration operation
    // int a=(5,4); // will work cz operator here a=4;
    // a=5,4; // 5 will be assigned. cz precedence of = and assignment operation

    a=(printf("nice\n"),4); /* first value i.e left one, gets evaluated and then rejected and then second val is eval then returned */

    b=(printf("nice2\n"),4,44); // works for more than two operators as well. precedence left to right

    // yes, fk is the point then??!!
    printf("%d",a);
    printf("\n%d",b);

    return 0;
}