#include<stdio.h>
void main() {
    int s1,s2,s3,s4,total;
    float per;
    printf("enter marks of 4 subs: ");
    scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
    total=s1+s2+s3+s4;
    if(s1>=40 && s2>=40 && s3>=40 && s4>=40) {
        printf("pass");
        per=total/4;
        if(per>=80)
            printf("\ndist ayo");
        else if(per>=70)    
            printf("ass a");
        else if(per>50)
            printf("2nd");

    }
    else
        printf("failed");

}