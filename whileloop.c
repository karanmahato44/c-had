// #include<stdio.h>
// int main(void) {
//     int i=10;
//     while(i>0) {
//         printf("%d\n",i);
//         --i;
//     }
//     return 0;
// }

#include<stdio.h>
int main() {
    int i=1, mul;
    while(i<11) {
        mul=2*i;
        printf("2*%d=%d\n",i,mul);
        ++i;
    }
    return 0;
}