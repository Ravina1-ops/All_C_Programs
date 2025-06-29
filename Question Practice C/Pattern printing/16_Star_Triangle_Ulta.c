/*PRINT THE PATTERN
* * * * * 
* * * * 
* * * 
* * 
* 
*/
#include<stdio.h>
int main()
{
    int n ;
    printf("enter no of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i!=0)
        for(int j=1;j<=n+1-i;j++){
            if(j!=0)
            printf("* ");
        }
    printf("\n");
    }
    return 0;
}