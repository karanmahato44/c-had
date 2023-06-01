#include<stdio.h>
#include<string.h>
int main(void) {
    char s1[20]="kappa";
    char s2[20]="kyto";
    int i, len1, len2;
    len1=strlen(s1);
    len2=strlen(s2);
    for(i=0; i<=len2; ++i) {
        s1[len1+i]=s2[i];
    }
    
    printf("Concatenated string is: %s",s1);
    return 0;
}