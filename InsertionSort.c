// Insertion sort 
// Preferred for small no. of elements
// O(n^2)

#include<stdio.h>
#include<stdlib.h>

void InsertionSort(int a[], int n)
{
    int i,j;
    for(i = 1; i < n; i++)
    {
        int key = a[i];
        j = i - 1;
        while(j > -1 && key < a[j])
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key; 
    }
}
int main()
{
    int a[] = {1,2,5,8,6,3,0};
    int n=7;
    InsertionSort(a,7);
    for(int i = 0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}