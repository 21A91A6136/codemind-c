#include<stdio.h>
int main()
{
    int n,i,m,found=0;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(m==arr[i])
        {
            found++;
            break;
        }
    }
    if(found==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}