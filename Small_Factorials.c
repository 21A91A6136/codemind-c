#include<stdio.h>
int main()
{
    int n,p=1,j,i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        p=0;
        scanf("%d",&n);
        p=1;
        for(j=1;j<=n;j++)
        {
            p=p*j;
        }
        printf("%d
",p);
    }
}