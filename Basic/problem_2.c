#include<stdio.h>

#define MAX_LEN 100

int main()
{
//    Define variable
char ch;
char s[MAX_LEN];
char sentence[MAX_LEN];

// taking input
scanf("%c",&ch);
scanf("\n");
 scanf("%[^\n]%*c", s);
 scanf("%[^\n]%*c", sentence);

//  print output
 printf("%c\n", ch);
 printf("%s\n", s);
 printf("%s\n", sentence);

     return 0;
}