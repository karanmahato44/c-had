#include <stdio.h>
int main() {
    int a[]={10,11,-1,56,67,5,4};
    int *p, *q;
    p=a;
    q=&a[0]+3;
    printf("%d %d %d\n",(*p)++,(*p)++,*(++p)); // 12 11 11
    printf("%d\n",*p); // 13
    printf("%d\n",(*p)++); // 13
    printf("%d\n",(*p)++); // 14 but val 15 bhaisakyo IMP

    // pointer p is at index 1

    printf("val at *p: %d\n",*p); // IMP

    q--;
    printf("%d\n",(*(q+2))--); // 67 but 67 becomes 66
    printf("%d\n",*(p+2)-2); // 54, but pointer p is still at index 1, since we AREN'T UPDATING P FOR IT'S OWN VAL? smh
    // ie we are not assigning, similar to p+1 without assignment operator

    printf("val at *p: %d\n",*p); // index 1, ie val=15

    printf("%d\n",*(p++ -2)-1); // random garbage val -1
    printf("%d\n",*p); // -1 ie index 2
    printf("%d\n",*p-1);
    printf("%d\n",*p);

    return 0;
}