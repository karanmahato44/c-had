#include <stdio.h>
char chprinter(void); // fn declaration

char chprinter(void) { // fn defn
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    return ch;
}

char main() { // main fn
    char val;
    val=chprinter(); // fn call
    printf("%c",val);
    return 0;
    
}