#include<stdio.h>
#include<string.h>
int main(void) {
    int i,l;
    char str[20];
    printf("enter string: ");
    fgets(str, 20, stdin);
    l=strlen(str);
    for(i=0; i<l; ++i) { // or condn can be str[i] != '\0' too
        if(str[i]>='A' && str[i]<='Z') // ascii/utf value is used
            str[i] += 32;
    }
    printf("lwr case string is: %s",str);

    return 0;
}