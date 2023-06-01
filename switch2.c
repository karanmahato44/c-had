#include<stdio.h>
void main() {
    int a, b;
    char op;
    printf("enter the operation symbol and THEN two nums:\n");
    scanf("%c%d%d",&op,&a,&b);
    // printf("enter 2 nums: ");
    // scanf("%d%d",&a,&b);
    switch(op) {
        case '+':
            printf("sum is %d",a+b);
            break;
        case '-':
            printf("diff is %d",a-b);
            break;
        case '/':
            printf("div is %d",a/b);
            break;

        default:
        printf("op not defined");
    }

}