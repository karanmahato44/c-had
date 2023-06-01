/*
    initilization; condn/termination condn; update/modify
for(expression1; expression2; expression3) {
    // braces are optional for a single statement;
}

only ; ; are compulsory i.e #### for(; ;) #### is also allowed

*** VIMP if initialization is not provided for i inside the loop then it starts from 0 but if u print i outside loop withou initialization it will print garbage value ***
*/

// print 1 to 10

// #include<stdio.h>
// int main(void) {
//     int i;
//     for(i=1; i<=10; ++i) { // or for(i=1; i<11; ++i)
//         printf("%d ",i);
//     }
//     return 0;
// }

// print sth 10 times
#include<stdio.h>
int main(void) {
    int i; // i can be initialized here as well instead of inside for
    for(i=0 ; i<10 ; i+2) {
        printf("%d. nice\n",i);
    }
    printf("out of time!");
    return 0;
}