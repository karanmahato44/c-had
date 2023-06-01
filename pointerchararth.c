#include <stdio.h>
int main() {
    char str[]="welcome to jenny's lectures"; // char takes 1 byte *say
    char *ptr=str;
    printf("%c\n",*ptr); //w
    printf("%c\n",*(ptr++ +1)); // e , pointer to e
    printf("%c\n",*((ptr-- +5)-1)+3); // p, m+3, pointer to w
    printf("%c\n",*(++ptr+10)-32); // J (capital, ascii) , j-32, pointer to e
    printf("%c %c %c",*ptr,*++ptr,*--ptr); // e e w
    return 0;
}