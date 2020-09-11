#include<stdio.h>

void merge(int arr[], int p, int q, int r)
{
    int n1 = (q - p) + 1;
    int n2 = r - q;
    int L[ n1 + 1 ];  // Left Array
    int R[ n2 + 1 ];        // Right Array
    int i;
    int j;
    
    for(i = 0; i < n1; i++)
    {
        L[i] = arr[i+p];
    }

    for(j = 0; j < n2; j++)
    {
        R[j] = arr[j+q+1];
    }

    L[i] = 99;
    R[j] = 99;

    int k;
    i = 0;
    j = 0;
    for(k = p; k <= r; k++)
    {
        if(L[i] < R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
    } 
}
void mergeSort(int arr[],int p, int r)
{
    if(p < r)
    {
        int q = (p + r)/2;
        mergeSort(arr,p,q);
        mergeSort(arr,q+1,r);
        merge(arr,p,q,r);
    }
}

int main()
{
    int a[] = {1,2,9,8,10};
    mergeSort(a,0,4);
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}