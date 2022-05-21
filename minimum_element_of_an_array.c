#include<stdio.h>
int main()
{
    int n,i,s=9999;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<s)
        {
            s=arr[i];
        }
    }
    printf("%d",s);
}