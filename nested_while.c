#include<stdio.h>
int main(void) {
    int i=0, j=1;
    while(i<3) {
        while(j<=3) {
            printf("%d",j++);
        }
    printf("%d",i++);
    }
    return 0;
}