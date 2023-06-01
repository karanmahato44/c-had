// compiler auto adds \0 in the end

#include<stdio.h>
#include<string.h>
int main(void) {
    char nice[10]={'n','i','h','\0'};
    char nice2[]="kytokappa";
    printf("%s",nice);
    puts(nice); // puts auto adds a new line in the end(after printing)
    puts("nice\n");
    printf("\n%s",&nice2); // will print from start // address of nice2
    printf("\n%s",&nice2[2]); // will print from index 02



    printf("length of nice2\n");
    return 0;
}