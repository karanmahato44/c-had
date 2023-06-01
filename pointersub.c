#include<stdio.h>
int main(void) {
    int x;
    int arr[5]={1,2,3,4,5};
    int *p=&arr[0];
    int *q=&arr[2];
    x=q-p; // gives integer val i.e. no of elements between the pointers counting the end one too OR how many apart


    /*


    q-p
    say.
    1000-1004
    then /4

    1000-1004
    -----------
    4

    -1 ===> 1 element apart +ve or -ve same thing
    
    */

    printf("address that p holds: %x",p);
    printf("\naddress that q holds: %x\n",q);

    q -= 2; // gives address or pointer like addition // q-n = q - n * sizeofint ?? datatype ??
    printf("\nnew address that q holds: %x\n",q);
    printf("%d\n",*q);
    printf("there are %d elements in between the pointers.",x);
    



    return 0;
}