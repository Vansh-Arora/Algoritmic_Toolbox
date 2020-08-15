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
    int a[] = {1,5,9,7,2,3};
    SelectionSort(a,6);
    int i;
    for(i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}