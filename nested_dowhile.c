#include<stdio.h>
int main(void) {
    int i=1, j=3;
    do {

        do {
            printf("%d",--j);
        }while(j>0);

    printf("%d",i++);
    
    }while(i<4);
    return 0;
}