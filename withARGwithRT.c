#include <stdio.h>

float fn(float, float);

float fn(float x, float y) {
    return x+y;
}

int main() {
    float a,b;
    printf("enter two float numbers: ");
    scanf("%f%f",&a,&b);
    float value;
    value = fn(a,b);
    printf("\nsum is %f",value);
    return 0;
}