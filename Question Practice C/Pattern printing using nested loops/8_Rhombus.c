/*
    ******
   ******
  ******
 ******
******
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {printf("*");}
        for(int l=1;l<=n+1-i;l++)
        {
            printf("*");}
    printf("\n");
    }
}