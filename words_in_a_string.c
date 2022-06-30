#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,wc=0;
    scanf("%[^
]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]==32)
        wc++;
    }
    
    printf("%d",wc+1);
}