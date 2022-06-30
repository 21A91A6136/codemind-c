#include<stdio.h>
int main()
{
    int i,n,j,arr[100],c=0,s=0,f=0,t=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            c++;
        }
        if(c==arr[i])
        {
            f=1;
            t++;
            s=s+arr[i];
            arr[i]=0;
        }
    }
    if(f==0)
    printf("-1");
    else
    {
    avg=(float)s/t;
    printf("%.2f",avg);
}
}