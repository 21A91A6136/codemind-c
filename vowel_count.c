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
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        wc++;
    }
    
    printf("%d",wc);
}