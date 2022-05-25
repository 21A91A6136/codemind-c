#include<stdio.h>
int main()
{
    int arr[100],n,i,a,b,v=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
            printf("%d ",arr[i]);
            v++;
        }
    }
    if(v==0)
    {
        printf("-1");
    }
}
