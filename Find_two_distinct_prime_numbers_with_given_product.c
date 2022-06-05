#include<stdio.h>
int prm(int j)
{
    int v,k=0;
    for(v=1;v<=j;v++)
    {
        if(j%v==0)
        {
            k++;
        }
    }
    if(k==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,v[2004],k=0,r,j,l,m=0;
    scanf("%d",&n);
    for(j=2;j<n;j++)
    {
        if(n%j==0 && prm(j))
        {
            v[k]=j;
            k++;
        }
    }
    for(j=k;j>=0;j--)
    {
        m=0;
        for(l=k;l>=0;l--)
        {
            if(v[j]*v[l]==n)
            {
                m++;
                break;
            }
        }
        if(m!=0)
        {
            break;
        }
    }
    if(v[j]*v[l]==n)
    {
        printf("%d %d",v[l],v[j]);
    }
    else
    {
        printf("-1");
    }
}