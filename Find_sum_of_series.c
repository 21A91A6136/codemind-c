#include<stdio.h>
int main()
{
    int n,i;
    float p=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p+=(1.0/i);
    }
    printf("%.2f",p);
}