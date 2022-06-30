#include<stdio.h>
int main()
{
    int i,j,n,a[200],c=0,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
                if(a[i]==a[j])
                c++;
        }
       if(c==a[i])
          {
              f++;
              a[i]=0;
          }
    }
    
    printf("%d",f);
    
}