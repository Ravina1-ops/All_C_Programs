/*  A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
*/
#include<stdio.h>
int main(){
    int n ;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    int nsp=n-1;
    int nap=1;
   
    for(int i=1;i<=n;i++)
    { int a=1;
        for(int k=1;k<=nsp;k++)
        {
            printf(" ");
        }
    
        
        for(int j=1;j<=nap;j++)
        {char ch=(char)(a+64);
            printf("%c",ch);
        a++;
    }
        
        nsp=nsp-1;
        nap=nap+2;
        printf("\n");
    }
}