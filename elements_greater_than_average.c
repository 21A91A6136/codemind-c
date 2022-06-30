#include<stdio.h>
int main()
{
    int n,i,s=0,a[100],c=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s+=a[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>=avg)
        c++;
    }
    printf("%d",c);
}