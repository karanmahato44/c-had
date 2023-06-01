// print sum, only break on -ve num for10 nums

#include<stdio.h>
int main(void) {
    int n,i,sum=0;
    for(i=1; i<=10; ++i) {
        printf("Enter a number: ");
        scanf("%d",&n);
        if(n<0) 
            break;
        sum=sum+n;
    }
    printf("Sum is %d",sum);    
    return 0;
}