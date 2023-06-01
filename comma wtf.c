// comma acts as both separator and operator
#include<stdio.h>
int main() {
    int a;
    // int a=5,4; // will give error cz , is sep. here and declaration operation
    // int a=(5,4); // will work cz operator here a=4;
    // a=5,4; // 5 will be assigned. cz precedence of = and assignment operation

    a=(printf("muji\n"),4,5); /* first value i.e left one, gets evaluated and then rejected and then second val is eval then returned */
    
    // yes, fk is the point then??!!
    printf("%d",a);
    return 0;
}