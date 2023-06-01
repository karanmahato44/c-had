#include<stdio.h>
#include<string.h>
int main(void) {
    char str[20];
    int i, l;
    int j;
    
    char temp;
    printf("enter a string: ");
    fgets(str, 20, stdin);
    l=strlen(str);

    for(i=0; i<(l/2); ++i) {  // swapping to half // 1 remains for odd
        temp=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=temp;
    }
    printf("reverse string is: %s",str);


    // OR

    for(i=0,j=l-1 ; i<j ; ++i,--j) {
        temp=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=temp;

    }

    printf("\n");
    printf("string rev is : %s",str);

    return 0;
}