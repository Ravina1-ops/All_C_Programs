//printf the pattern rows = 4 columns= 4 star pattern
/*
* * * * 
* * * * 
* * * * 
* * * * 
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of Rows: ");
    scanf("%d",&n);
    int m ;
    printf("Enter no. of columns:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++)
    {
        for(int i=1;i<=m;i++)
        {printf("* ");
    }
    printf("\n");}
    return 0;
    
}