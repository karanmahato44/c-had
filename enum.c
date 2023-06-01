#include <stdio.h>
#include <stdlib.h>

int main() {
    enum days {sun,mon,tue,wed}; // the values can only be interger
    // sun, mon ... are have 0, 1 ,2 ,3 ... values , auto given by the compiler
    
    enum days var;
    printf("day? int value: ");
    scanf("%d",&var);
    switch(var) {
        case sun:
        printf("\nsunday");
        break;

        case mon:
        printf("\nmonday");
        break;

        case tue:
        printf("\ntueday");
        break;

        case wed:
        printf("\nwednesday");
        break;

        default:
        printf("\ninvalid");
    }
    return 0;
}