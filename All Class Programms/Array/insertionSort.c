#include <stdio.h>
int main()
{
    int j,arr[5] = {43,54,75,88,36};
    int n=5;
    printf("Unsorted array : \n");
    for (int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i=1;i<n;i++)
    {
        int num=arr[i];
        for ( j=i-1;j>=0;j--)
        {
            if (arr[j] > num)
            {arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
       arr[j+1]=num;
    }
    printf("\n");
    printf("Sorted array: \n");
    for (int i=0;i<n;i++)  
    {
        printf("%d ",arr[i]);
    }
    return 0;
}







