#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int i,j,sum=0,c=0;
    for(i=1;i<=num;i++)
    {
        sum=i*i;
        if(sum==num)
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}