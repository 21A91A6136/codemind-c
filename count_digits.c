#include<stdio.h>
int digit(int);
int digit(int a)
{
    int d,dc=0;
    if(a==0)
    return 1;
    while(a)
    {
      d=a%10;
      dc++;
      a/=10;
    }
    return dc;
}
int main()
{
    int n,a[100],i,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
    for(i=0;i<n;i++)
   {
       c=digit(a[i]);
       printf("%d ",c);
   }

   
}