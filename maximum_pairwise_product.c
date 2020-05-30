#include<stdio.h>

long long max_product(long long arr[],long long n)
{
    long long i;
    long long a = -1;
    long long b = -1;
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
    long long n,i;
    scanf("%lli",&n);
    long long arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%lli",&arr[i]);
    }
    //printf("%d\n",sizeof(long long int));
    printf("%lli",max_product(arr,n));
    return 0;
}