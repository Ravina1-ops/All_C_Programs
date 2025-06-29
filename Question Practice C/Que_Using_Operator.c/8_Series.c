//Print the sum of the series : 1-2+3-4+5-6....upto'n'
#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter no.");
    scanf("%d",&n);
    // for(i=1;i<=n;i++){
    // if(i%2==0) sum=sum-i;
    // {if(i%2!=0)
    //     sum=sum+i;
    // }}
    if(n%2==0){
        sum=-n/2;}
        else{
            sum=-n/2+n;
        }
    printf("The sum of series %d",sum);
}