#include<stdio.h>
int main(void) {
    int i,num,mul;
    printf("Enter the number of which you want the tabel: "); scanf("%d",&num);
    for(i=1;i<=10;++i) {
        mul=num*i;
        printf("%d*%d=%d\n",num,i,mul);
    }
    return 0;
}