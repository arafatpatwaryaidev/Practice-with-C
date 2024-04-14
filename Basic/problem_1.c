#include<stdio.h>
int main()
{
    int A;
    scanf("%d",&A);
    printf("Enter the number A: ");

    if(A>0) {
        printf("%d is positive.",A);
    }
    else if(A<0){
        printf("%d is negative.",A);
    }
    else{
        printf("%d is zero.",A);
    }
     return 0;
}