#include<stdio.h>
int main()
{
    int n;
scanf("%d",&n);
// Array declare
int ar[n];
 for (int  i = 0; i < n; i++)
 {
   scanf("%d",&ar[i]);
 }
//  position and value declare
int pos;
scanf("%d",&pos);
// Logic
for(int i=pos;i<n-1;i++)
{
ar[i]=ar[i+1];
}
// for print
for(int i=0;i<n;i++)
{
    printf("%d ",ar[i]);
}

     return 0;
}