#include<stdio.h>
int main(){
    int a[5],i,sum=0;
    printf("Enter Elements of array: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        sum=sum+a[i];
    }
    printf("Sum of array elements is %d",sum);

}