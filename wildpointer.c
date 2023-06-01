#include <stdio.h>
int main(void) {
    int *ptr; // acting as wild pointer // can be saved with NULL pointer use or malloc
    printf("%d\n",*ptr); // random value from/at random addresss or a seg fault(morelikely)

    return 0;
}