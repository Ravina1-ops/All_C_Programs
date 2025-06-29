#include<stdio.h>
int low=0,mid=0;
int binarySearch(int arr[],int size,int element,int high){
while(low<=high){
    mid=(low+high)/2;
    if(arr[mid]==element){
        return mid;
    }
    if(arr[mid]<element){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
}}
int main(){
int arr[]={1,2,7,8,10,22,55,75,84,225,556};
int size =sizeof(arr)/sizeof(int);
int high= size-1;
int element;
printf("Size of array %d\n",size);
    printf("Enter element for search: ");
    scanf("%d",&element);
    int searchIndex = binarySearch(arr,size,element,high);
    printf("The element %d was found at index %d",element,searchIndex);
    return 0;
}




