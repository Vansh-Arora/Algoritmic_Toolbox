#include<stdio.h>

/* In a given array find the maximum product possible for any pain*/

long long max_product(long long arr[],long long n)
{
    long long i;
    long long a = -1;
    long long b = -1;

    // Check for the largest number in array
    for(i=0;i<n;i++)
    {
        if(arr[i] > arr[a] || a == -1)
            a = i;
    }
    // check for 2nd largest number in array
    for(i=0;i<n;i++)
    {
        if( (arr[i] > arr[b] || b == -1) && i != a)
            b = i;
    }
    // a index of largest element
    // b index of 2nd largest element
    return arr[a]*arr[b]; // max possible product
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
    printf("%lli",max_product(arr,n));
    return 0;
}