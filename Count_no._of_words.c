#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int len,i,c=1;
    scanf("%[^
]s",&s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]==' ')
        {
        c++;
        }
    }
    printf("%d",c);
    return 0;
}