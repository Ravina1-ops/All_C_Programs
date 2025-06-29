
#include<stdio.h>
int linearSearch(int arr[], int size, int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
     { return i;}
    }
    return -1;  
} 
int main(){
    int arr[]={1,2,3,8,4,5,6,52,47,99,86,54,57,25,15,35,64};
    int size = sizeof(arr)/sizeof(int);
    int element;
    printf("Enter element for search: ");
    scanf("%d",&element);
    int searchIndex = linearSearch(arr,size,element);
    printf("The element %d was found at index %d \n",element,searchIndex);
    return 0;
}


