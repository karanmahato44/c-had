#include <stdio.h>
char fn(void); // function declaration
char fn(void) { // function definition
    char ch;
    return 'a';

    //this whole block won't be executed bcz return(1st) statement marks the funtion termination
    printf("enter a char: "); // function body
    scanf("%c",&ch);
    return ch;
}

int main() { // main function
    char val=fn();
    printf("%c",val);
    return 0;
}