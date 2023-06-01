#include<stdio.h>
int main() {
    int a, b, l;
    printf("enter a: ");
    scanf("%d",&a);
    printf("\nenter b: ");
    scanf("%d",&b);
    l=a>b?a:b;
    printf("\n%d is bigger",l);

    return 0;
}