#include<stdio.h>
int main(void) {
    char check;
    printf("Enter an alphabet: "); scanf("%c",&check);
    switch(check) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O': // IMP if case is matched with the exp in ()and no break is encountered then all other case statements will be printed too without checkeckin the case constant or char TILL a break is found or till default. watch jenny's video at around 13:00
        case 'u':
        case 'U':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
    }
    return 0;
}