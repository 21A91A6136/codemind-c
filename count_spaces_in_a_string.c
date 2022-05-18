#include<stdio.h>
#include<string.h>
int main()
{
    int i,sum=0;
    char s[100];
    scanf("%[^
]s",s);
    while(s[i]!=NULL)
    {
        if(s[i]==' ')
        {
            sum++;
        }
        i++;
    }
    printf("%d",sum);
}