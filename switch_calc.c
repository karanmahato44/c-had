#include<stdio.h>
int main(void) {
    int a, b;
    char ch;
    printf("What operation?: "); scanf("%c",&ch);
    printf("What's a?: "); scanf("%d",&a);
    printf("What's b?: "); scanf("%d",&b);
    switch(ch) {
        case '+':
            printf("Sum is %d",a+b);
            break;
        case '-':
            printf("Difference is %d",a-b);
            break;
        case '*':
            printf("Multiplication is %d",a*b);
            break;
        case '/':
            printf("Division is %d",a/b);
            break;
        case '%':
            printf("Remainder is %d",a%b);
            break;
        default:
            printf("Invalid operation");
    }

    return 0;
}