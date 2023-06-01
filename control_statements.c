#include<stdio.h>
void main() {
    float sales, bonus;
    printf("enter total sales made: ");
    scanf("%f",&sales);
    if (sales>=1000);
    bonus=0.10 * sales;
    printf("comission is: %f",bonus);
}