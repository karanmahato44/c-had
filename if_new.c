#include<stdio.h>
int main(void) {
    int a;
    puts("enter a num: ");
    scanf("%d",&a);
    if(!a)//; //if true; true meaning any non zero value
    //putting a ; in if terminates it without any block inside it even with { } or not

    // be careful with logical not ! opearator
    // true to false, false to true
    {

        puts("inside if block");
        puts("inside if block2");
    }
    puts("outside if block");
    return 0;
}