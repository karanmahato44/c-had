#include<stdio.h>
int main(void) {
    int n;
    printf("enter num: ");
    scanf("%d",&n);
    switch(n) { // n is matched to case X; ie var int or char
    // any expression or constant(int) can be in place of n but above comment
    // n in switch(n) cannot be float so avoid using float in declaration too
    // but char - yes

        case 1: 
            printf("top");
            break;
        case 2:
            printf("kek");
            break;
        default:
            printf("nice");
    }
    printf("\nout of switch");
    return 0;
}