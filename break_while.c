// print sum, only break on -ve num
#include<stdio.h>
int main(void) {
    int n, sum=0;
    while(1) {
        printf("Enter a NUMBER: ");
        scanf("%d",&n);
        if(n<0)
            break;
        sum=sum+n;
    }
    printf("Sum is %d",sum);
    return 0;
}