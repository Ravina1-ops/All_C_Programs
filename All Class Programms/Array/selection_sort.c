#include <stdio.h>
int main()
{
    int i,j,min,temp, arr[5] = {64, 25, 12, 22, 11};
    int n=5;
    printf("Unsorted array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for ( i = 0; i < n - 1; i++)
    {
       min = i;
        for ( j = i; j <= n - 1; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
       if(min!=i){
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
       }
    }
    printf("\n");
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)  
    {
        printf("%d ",arr[i]);
    }
    return 0;
}



