#include<stdio.h>
int main(void) {
    int x, y, z;
    printf("What's x?: "); scanf("%d",&x);
    printf("What's y?: "); scanf("%d",&y);
    printf("What's z?: "); scanf("%d",&z);
    
    if(x>y) {
        if(x>z) 
            printf("%d is the largest",x);
        else
            printf("%d is the largest",z);
    }
    else {
        if(y>z)
            printf("%d is the largest",y);
        else
            printf("%d is the largest",z);
    }
return 0;
}