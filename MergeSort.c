#include<stdio.h>

void merge(int arr[], int p, int q, int r)
{
    printf("jel");   # Remove this statement to see error
    int L[ ((q-p)+1) + 1 ];  // Left Array
    int R[ (r-q) + 1 ];        // Right Array
    int i;
    int j;
    
    for(i = 0; i <= q; i++)
    {
        L[i] = arr[i];
    }

    for(j = 0; j <= r-q; j++)
    {
        R[j] = arr[j+q+1];
    }

    L[i] = 99;
    R[j] = 99;

    int k;
    i = 0;
    j = 0;
    for(k = 0; k <= r; k++)
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
    int a[] = {1,5,8,10,2,7,9,11};
    mergeSort(a,0,7);
    int i;
    printf("ans");
    for(i=0;i<8;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
