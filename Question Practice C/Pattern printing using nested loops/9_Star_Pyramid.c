/*
    *
   ***
  *****
 *******
*********
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    int d=1;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=d;j++)
        {
            printf("*");
        }
        d=d+2;
        printf("\n");
    }
}