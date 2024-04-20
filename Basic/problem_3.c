#include<stdio.h>
int main()
{
    // Define variable
    int int1, int2;
    float float1, float2;

    // taking input

    sscanf("%d %d", &int1, &int2);
    sscanf("%f %f", &float1, &float2);

    // calculating 
    int intSum = int1 + int2;
    int intDiff = int1 - int2;

     float floatSum = float1 + float2;
    float floatDiff = float1 - float2;

    // print output
    printf("%d %d\n", intSum, intDiff);
    printf("%.1f %.1f\n", floatSum, floatDiff);

     return 0;
}