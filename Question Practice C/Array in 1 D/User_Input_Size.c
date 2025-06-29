#include<stdio.h>
int main(){
    int n;
    printf("Entr size of array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=n-1;i++)
    {
        printf("%d ",a[i]);
    }
}