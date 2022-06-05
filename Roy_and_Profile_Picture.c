#include<stdio.h>
int main()
{
    int l,n,v,k,i;
    scanf("%d%d",&l,&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&v,&k);
    if(v<l || k<l)
    {
        printf("UPLOAD ANOTHER
");
    }
    else if(v>=l && k>=l)
    {
        if(v==k)
        {
        printf("ACCEPTED
");
        }
        else 
        {
           printf("CROP IT
");
        }
    }
    }
    return 0;
}