#include<stdio.h>
int main()
{
    int n,arr[100],i,sum=0,temp,d,d1,sum1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
      
      temp=arr[i];
      while(temp>0)
      {
          d=temp%10;
          sum=sum+d;
          temp/=10;
      }
    }
    
    printf("%d",sum);
}