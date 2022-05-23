#include<stdio.h>
int main()
{
    int a[100],i,n,even,ind;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even=a[i];
        }
    }
    printf("%d",even);
}