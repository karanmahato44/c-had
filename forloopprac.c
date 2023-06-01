#include<stdio.h>
int main(void) {
    int i,j;
    for(i=1,j=0;i<5,j<=6;j++); { // for loop terminates her and the statements are treated as part of the program not loop
        printf("%d%d",i,j);
        i++;
    }
    return 0;
}