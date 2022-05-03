#include<stdio.h>
int main()
{
    int n,p;
    scanf("%d %d",&n,&p);
    if((n%2==0)&&((n>0)||(p%2==0)))
    printf("YES");
    else
    printf("NO");
}