#include<stdio.h>
#include<string.h>
int main(void) {
    char s1[20];
    char s2[20];
    int i, flag=0;
    printf("enter first string: ");
    gets(s1);
    printf("enter second string: ");
    gets(s2);
    
    for(i=0; s1[i] != '\0' || s2[i] != '\0'; ++i) {
        if(s1[i] != s2[i]) {
            flag=1;
            break;
        }
    }
        if(flag==1) 
            printf("strings not same");
        else
            printf("strings are same");
   return 0;
}