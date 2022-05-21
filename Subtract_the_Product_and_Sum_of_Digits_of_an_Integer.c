#include<stdio.h>
int main()
{
    int d,s=0,p=1,n;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        s=s+d;
        p=p*d;
        n=n/10;
    }
    if(s>p)
    printf("%d",s-p);
    else
    printf("%d",p-s);
}