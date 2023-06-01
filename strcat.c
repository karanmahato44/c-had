#include<stdio.h>
#include<string.h>
int main(void) {
    char string1[20]="kyto";  // dest should be larger enough but strcat also suffers form buffer overflow
    char string2[10]="kappa";
    strcat(string1,string2); // first arg destination second is source
    strncat(string2,string1,3);
    printf("Concatenated string is: %s",string1);
    printf("\nConcatenated string is: %s",string2);

    return 0;
}