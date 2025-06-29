#include<stdio.h>
int main(){
    int a[3],i,mul=1;
    printf("Enter array elements: ");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++){
        mul=mul*a[i];
    }
    printf("Product %d ",mul);
}