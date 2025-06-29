/*Find the maximum value out of all the elements in the array.*/
#include<stdio.h>
int main(){
    int a[5],i,max;//max ma hum sabse chota no. da rha h taki compare karna ma koi dikkat na ho
    printf("Enter array elements: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {   
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("Maximum value of array elements %d",max);

}
/* #include<stdio.h>
#include<limits.h>
int msin(){
int arr(5) ={2,5,4,8,9};
int max=INT_MIN;
for(int i=0;i<=4;i++)
{
if(max<a)}
}*/