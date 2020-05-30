#include<stdio.h>
#include<stdlib.h>
#include<time.h>
long long int max_pro(long long int arr[], long long int n)
{
    long long int i,j,pro = 0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]*arr[j]>pro)
                pro = arr[i]*arr[j];
        }
    }
    return pro;
}
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
    while(1)
    {
    long long int n,i;
    //scanf("%d",&n);
    srand(time(0));
    n = rand() % 3;
    long long int arr[n];
    for(i=0;i<n;i++)
    {
        //scanf("%d",&arr[i]);
        arr[i] = rand() % 10;
    }
    //printf("%d",max_product(arr,n));
   
    if(max_product(arr,n) == max_pro(arr,n))
    {
        printf("%lli == %lli\n",max_product(arr,n),max_pro(arr,n));
        printf("no problem\n");
    }
    }  
    return 0;
}