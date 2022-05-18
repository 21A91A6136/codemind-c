#include<stdio.h>
#include<string.h>
int main()
{
    int s,i;
    char str[100];
    scanf("%[^
]s",str);
    s=strlen(str);
    for(i=s-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    
}