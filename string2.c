#include<stdio.h>
int main(void) {
    char name[20];
    printf("enter your name: ");
    gets(name); // gets has buffer overflow // use fgets(strname, sizeMAX, stdin);

    printf("%.5s\n",name);
    printf("%10.5s\n",name);

    puts(name); // adds newline in the end
    printf("%s",&name[3]);

    return 0;
}