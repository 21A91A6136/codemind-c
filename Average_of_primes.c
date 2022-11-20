#include<stdio.h>
#include<math.h>
int main()
{
	int n,arr[100],i,c=0,j,d;
	float k,sum=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n;i++)
	{
	    c=0;
	    for(j=1;j<=arr[i];j++)
	    {
    	    if(arr[i]%j==0)
    	    {
    	       
    	       c++;
    	    }
	    }
	    if(c==2)
	    {
	        sum=sum+arr[i];
	        d++;
	    }
	}
	k=sum/d;
	printf("%.2f",k);
}
