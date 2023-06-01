#include <stdlib.h>
#include <stdio.h>

// int *fn() {
//     int a=44; // if static int a=44 then no dangling on main q
//     return &a;
// }

int main() {\

    int *pointer;
    // int *q=fn();
    // printf("%d\n",*q); // q is dangling now, cz a is local var to function fn

    // int *p=(int *)malloc(sizeof(int));
    // *p=10;
    // printf("%d\n",*p);
    // free(p);
    // // now p is dangling
    // // can be dealt with using null pointer
    // p=NULL; 
    // printf("%d",*p); // segmentation fault, don't do it

    {
        int nice=69;
        int *pointer=&nice;
        printf("%d\n",*pointer);

    }

    printf("%d",*pointer); // now it is dangling
    // will print some random val or for some time may be correct val idk, cz a is out of scope and destroyed/vanished
    
    return 0;
}