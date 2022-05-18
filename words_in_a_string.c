#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int n,len,i;
    scanf("%[^
]s",&s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
    {
        n++;
    }
    }
        printf("%d",n+1);
}