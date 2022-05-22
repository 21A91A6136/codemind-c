#include<stdio.h>
int main()
{
    int n,c=0,o=0,l,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        if(r%2==0)
        {
            c++;
        }
        else
        {
            o++;
        }
    }
    if(c>0&&o==0)
    {
        printf("Even");
    }
    else if(o>0&&c==0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}