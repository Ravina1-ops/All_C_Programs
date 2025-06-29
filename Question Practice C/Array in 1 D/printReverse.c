/*To print the reverse of given array elements*/
#include<stdio.h>
int main(){
    int a[5],i;
    for(i=0;i<5;i++){
    printf("enter element number %d ",i+1);
    
    scanf("%d",&a[i]);
    }
    for(i=4;i>=0;i--)
    printf("%d",a[i]);
}