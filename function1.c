#include <stdio.h>
void sum() {
    int a, b;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("sum is %d\n",a+b);
} // after control goes back to function call mem will be freed or released/no longer reserved(for the local variables)/vanished

int main() {
    sum();
    printf("kek\n");
    sum();
    sum();
    return 0;
}