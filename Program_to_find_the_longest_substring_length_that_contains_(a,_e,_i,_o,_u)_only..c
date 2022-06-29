#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0,f=0;
    char s[100];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
        c++;
        else
        {
            if(c>f)
            {
                f=c;
                c=0;
            }
        }
    }
    printf("%d",f);
}