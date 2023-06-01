#include<stdio.h>
#include<conio.h>
int main(void) {
    int num;
    repeat:
    printf("Enter a number: "); scanf("%d",&num);
    switch(num) {
        case 69:
            printf("nice\n");
            printf("Press any key to quit!");
            break;
        default:
            printf("no.\n");
            goto repeat;
    }
    getch();
    return 0;
}