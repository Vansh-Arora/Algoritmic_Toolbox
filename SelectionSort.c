#include<stdio.h>
#include<stdlib.h>

void SelectionSort(int arr[],int n)
{
    int i;
    for(i = 0; i < n - 1; i++)
    {
        int smallest = i;
        int j;
        for(j = i + 1; j < n; j++)
        {
            if( arr[j] < arr[smallest])
                smallest = j;
        }
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;

    }
}
int main()
{
    int n;

    printf("Enter the size of array: ");
    scanf("%d",&n);
    
    int arr[n];
    int i;

    printf("Add array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d ",&arr[i]);
    }

    SelectionSort(arr,n);

    for(i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}