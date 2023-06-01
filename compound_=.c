#include<stdio.h>
int main() {
    int x=4, y=5, z=6;
    // x=x+6; // caveman shit
    x+=5;
    y-=5;
    z*=6;
    printf("final: %d %d %d",x,y,z);
    return 0;
}