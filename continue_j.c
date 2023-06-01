#include<stdio.h>
int main(void) {
    int i, n, sum=0;
    for(i=1;i<=5;++i) {
        printf("enter a num: ");
        scanf("%d",&n);
        if(n<0) {
            printf("-ve num, please enter +ve num sir");
            continue;
        }
        sum=sum+n;
    }
    printf("\nsum is %d",sum);

    printf("\nout of time!");
    return 0;
}