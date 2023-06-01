#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    int *p;

    printf("How many numbers to store? ");
    scanf("%d",&n);
    
    printf("\n\nFor calloc: \n");
    p = (int *)calloc(n,sizeof(int));

    printf("Numbers are: (calloc)\n");
    for(i=0; i<n; ++i) {
        printf("%d ",*(p+i));
    }
    free(p);

    // malloc after freeing

    p = (int *)malloc(sizeof(int));

    printf("\n\nFor malloc: \n");
    for(i=0; i<n; ++i) {
        printf("Enter index %d element: ",i);
        scanf("%d",(p+i));
    }

    printf("Numbers are: (malloc)\n");
    for(i=0; i<n; ++i) {
        printf("%d ",*(p+i));
    }

    free(p);
    return 0;
}