#include<stdio.h>
int main(void) {
    int i, sum=0,max=0,min=0;
    int arr[5];

    for(i=0; i<5; ++i) {
        printf("enter index[%d] element: ",i);
        scanf("%d",&arr[i]);
        sum += arr[i];

        if(arr[i]>max)
            max=arr[i];

        if(arr[i]<min)
            min=arr[i];
    }

    printf("sum is %d",sum);
    printf("\nmax is %d",max);
    printf("\nmin is %d",min);

    return 0;
}