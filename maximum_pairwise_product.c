#include<stdio.h>

long long int max_product(long long int arr[], long long int n)
{
    long long int i;
    long long int a = -1;
    long long int b = -1;
    for(i=0;i<n;i++)
    {
        if(arr[i] > arr[a] || a == -1)
            a = i;
    }
    for(i=0;i<n;i++)
    {
        if( (arr[i] > arr[b] || b == -1) && i != a)
            b = i;
    }
    return arr[a]*arr[b];
}

int main()
{
    long long int n,i;
    scanf("%d",&n);
    long long int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",max_product(arr,n));
    return 0;
}