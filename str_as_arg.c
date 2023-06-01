#include <stdio.h>
#include <string.h>
void fn(char [], char []);

void fn(char str[], char str2[]) {
    str2[1] = 'k';
    printf("length of str is: %d",strlen(str));
    printf("\nstr and str2 are: %s %s",str,str2);
}
int main() {
    char str[] = "kytokappa";
    char str2[] = "nice";
    fn(str, str2);
    return 0;
}