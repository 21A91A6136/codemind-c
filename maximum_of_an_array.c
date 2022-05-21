#include<stdio.h>
int main()
{
    int n,i,s;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    s=arr[0];
    for(i=0;i<n;i++)
    {
        if(s<arr[i])
        {
            s=arr[i];
        }
    }
    printf("%d",s);
}