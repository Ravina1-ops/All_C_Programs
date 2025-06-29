// Find the minimum no. from given arrray elements below than 1000.    
#include<stdio.h>
int main()
{
    int arr[5],i,min=1000;
    printf("Enter array elements:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
for(i=0;i<5;i++){
    if(min>arr[i]){
    }
    min=arr[i];}
printf("Minimum value ofarray elements: %d",min);
}
    