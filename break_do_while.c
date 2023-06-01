// print sum, only break on -ve num

#include<stdio.h>
int main(void) {
    int n, sum=0;
    do {
        printf("Enter a num: ");
        scanf("%d",&n);
        if(n<0)
            break;
        sum=sum+n;
    }while(1);
    printf("Sum is %d",sum);
    return 0;
}