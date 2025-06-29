/*  1
   123
  12345
 1234567
123456789*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++)
        {
            printf("%d",j);
        }
        nsp=nsp-1;
        nst=nst+2;
        printf("\n");
    }
  
}