#include<stdio.h>
void main() {
    int n;
    printf("enter the day num: ");
    scanf("%d",&n);
    switch(n) {
        case 1:
            printf("sunday");
            break;
        case 2:
            printf("monday");
            break;
        case 3:
            printf("tuesday");
            break;
        case 4:
            printf("wed");
            break;
        case 5:
            printf("thursday");
            break;
        case 6:
            printf("fri");
            break;
        case 7:
            printf("sat");
            break;

        default:
            printf("invalid input");


    }

}