#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,a[200],c=0,c1=0,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
       c+=a[i];
    }
    for(;i<n;i++)
    {
       c1+=a[i];
    }
    printf("%d
%d",c,c1);
    
}
  