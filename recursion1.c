#include <stdio.h>

void display(int);

void display(int n) {
    if(n<1) { // base or termination condn // VIMP
        return;
    }
    else {
    printf("%d",n);
    display(n-1);
    printf("%d",n);
    }
    
}


int main() {
    int n=3;
    display(n);  // ans should be 321123
    return 0;
}