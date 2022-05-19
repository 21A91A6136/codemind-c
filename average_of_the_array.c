#include<stdio.h>
int main()
{
    int i,n,a[100];
    scanf("%d",&n);
    float sum=0,avg=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
            sum=sum+a[i];
            avg=float(sum/n);
    }
    printf("%0.2f",avg);
}