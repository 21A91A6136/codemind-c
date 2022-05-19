#include<stdio.h>
int main()
{
    int a[100],n,i,s1=0,s2=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            s1+=a[i];
        }
        else
        {
            s2+=a[i];
        }
    }
    d=((s1>s2)?(s1-s2):(s2-s1));
    printf("%d",d);
    return 0;
}