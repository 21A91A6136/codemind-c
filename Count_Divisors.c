#include<stdio.h>
int main()
{
    int l,k,r,c=0,num;
    scanf("%d",&l);
    scanf("%d",&r);
    scanf("%d",&k);
    for(num=l;num<=r;num++)
    {
        if(num%k==0)
        {
            c++;
        }
    }
    printf("%d",c);
}