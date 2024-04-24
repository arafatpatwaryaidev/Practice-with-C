#include<stdio.h>
int main()
{
    int n;
    // taking input
    scanf("%d",&n);
    // Define Array
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",arr[i]);
    }
    // define value
    int i = 0, j=n-1;
    while (i<j)
    {
        int temp =arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

    // for print
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
     return 0;
}