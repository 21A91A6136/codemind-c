#include<stdio.h>
int main()
{
    int a[100],i,n,odd,ind;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            odd=a[i];
            ind=i;
        }
    }
    printf("%d",ind);
}