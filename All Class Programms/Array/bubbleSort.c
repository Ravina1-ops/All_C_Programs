#include <stdio.h>
int main()
{
    int arr[5] = {10,54,78,96,23};
    int n=5;
    printf("Unsorted array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for ( int j =0; j < n - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp;
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
       
    }
    printf("\n");
    printf("Sorted array: \n");
    for (int i=0;i<n;i++)  
    {
        printf("%d ",arr[i]);
    }
    return 0;
}



