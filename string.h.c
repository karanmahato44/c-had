#include<stdio.h>
#include<string.h>
int main(void) {


    char name[20];
    int length;
    printf("enter your name: ");
    gets(name);
    length=strlen(name);
    printf("\nlenght of the string is: %d",length);

    return 0;
}
    // without strlen
/*
    char name[20];
    int count=0, i=0;
    printf("enter name: ");
    gets(name);
    while(name[i] != '\0') {
        count++;
        i++;
    }
    printf("\nlength of the string is: %d",count);

    return 0;
}
*/