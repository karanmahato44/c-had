#include<stdio.h>
int main(void) {
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;

    ***r=25;
    printf("%d",*(*(*r))); // or simply ***r // accessing
    printf("\naddress of q: %x %x",r,&q);
    printf("\naddress of p: %x %x",q,&p);
    // printf("%d\n%d\n%d\n%d",a,*p,**q,***r);
    return 0;
}