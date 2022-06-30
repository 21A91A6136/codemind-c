#include<stdio.h>
int main()
{
    int a[100],n,i,m,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]<=m)
        s+=1;
        else
        s+=2;
    }
    printf("%d",s);
}
