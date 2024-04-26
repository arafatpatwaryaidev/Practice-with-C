#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    // create arry
    int arr[n];

    for (int  i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
    }

    // value 
    int divideTwo = 0;
    int divideThree = 0;
    int divideTwoThree = 0;

    for (int i = 0; i < n; i++)
    {
      if(arr[i] % 2 == 0 && arr[i] % 3 == 0){
        divideTwoThree ++;
      }
      else if(arr[i] % 2 == 0)
     {
        divideTwo ++;
      }
      else if(arr[i] % 3 == 0){
        divideThree ++;
      }
      
    }
    printf("%d %d\n", divideTwo + divideTwoThree, divideThree);
    

     return 0;
}