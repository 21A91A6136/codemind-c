#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,d=0;
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i])
        d+=pow(2,i);
    }
    printf("%d",d);
    
}