//print the pattern 1
                //  12
                //  123
#include<stdio.h>
int main(){
    int n;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}