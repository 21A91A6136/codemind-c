#include<stdio.h>
int main()
{
    int n,arr[100],i,rev=0,arr1[100],k,d,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        rev=0;
        temp=arr[i];
        while(temp>0)
        {
            d=temp%10;
            rev=rev*10+d;
            temp/=10;
        }
        printf("%d ",rev);
    }
}