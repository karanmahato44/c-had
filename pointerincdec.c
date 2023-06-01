#include<stdio.h>
int main() {
    int a[5]={11,22,33,44,55};
    int *p=a;
    printf("%d %d\n",*p++,*p++); // %d herne haina paila paxi ko part nai eval hunxa
    printf("%d\n",*p);
    printf("%d\n",*--p);
    printf("%d\n",++(*p)); // *(p=p+1)?sth like this;// can't do this with constants directly, but p is pointer here
    // printf("%d\n",*++p);
    return 0;
}