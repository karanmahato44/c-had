#include<stdio.h>
int main(void) {
    int marks;
    printf("How much did you get?: "); scanf("%d",&marks);
    if(marks>90)
        printf("A+");
    else if(marks>80)
        printf("A");
    else if(marks>70)
        printf("B");
    else if(marks>60)
        printf("C");
    else    // this else can be in skipped in else if ladder ONLY
        printf("git good");

    printf("\nout of ladder!");
    return 0;
}