#include<stdio.h>
int main() {
    int n;
    printf("enter num: ");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d is even: ",n);
    else
        printf("%d is odd",n);
    return 0;
}