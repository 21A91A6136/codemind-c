
#include<stdio.h>
int main()
{
    int a,i=1;
    scanf("%d",&a);
    if(a<=0 || a>10000)
    {
        printf("The Number Series is Not Possible Print");
    }
    else
    {
       x:
       printf("%d ",i);
       i++;
       if(i<=a)
       {
          goto x; 
       }
    }
}