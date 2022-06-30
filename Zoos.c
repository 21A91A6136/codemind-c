#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int i,c=0,k=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='z')
        c++;
        else if(s[i]=='o')
        k++;
    }
    if(k==2*c)
    printf("Yes");
    else
    printf("No");
}