#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(void) {
    char string1[255];
    char string2[255];
    int value;
    printf("Enter 1st string: ");
    fgets(string1, 255, stdin);
    printf("Enter 2nd string: ");
    fgets(string2, 255, stdin);
    
    printf("\n1st string = %s",string1);
    printf("\n2nd string = %s",string2);
    
    value=strcmp(string1,string2);
    
    if(value==0)
        printf("\nStrings are same.\n");
    else
        printf("\nStrings are different.\n");

    printf("\nAnd value is: %d\n",value);

    getch();
    return 0;
}