/*  A
   AB
  ABC
 ABCD
ABCDE
*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter no of rows: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {     int a=1;
        
        for(int j=1;j<=n-i;j++)
        {printf(" ");}
        for(int k=1;k<=i;k++)
        {char ch= (char)(a+64);
            printf("%c",ch);
            a++;
        }
            printf("\n");
        }
    }