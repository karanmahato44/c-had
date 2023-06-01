#include<stdio.h>
int main() {
    float l,b,h,a;
    printf("enter length: ");
    scanf("%f",&l);
    printf("\nenter breadth: ");
    scanf("%f",&b);
    printf("\nenter height: ");
    scanf("%f",&h);
    a=l*b*h;
    printf("\narea is: %4.4f",a);
    return 0;
}