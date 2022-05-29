#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int c=0,i,x,f=0;
    scanf("%[^
]s",ch);
    for(i=0;i<strlen(ch);i++)
    {
        x=ch[i];
        
        if(x==97)  { c=1; f++; break;  }
    }
    if(c==0)  printf("a ");
    c=0;
    for(i=0;i<strlen(ch);i++)
    {
        x=ch[i];
        
        if(x==101) { c=1; f++; break;}
    }
    if(c==0)  printf("e ");
    c=0;
    for(i=0;i<strlen(ch);i++)
    {
        x=ch[i];
        
        if(x==105) { c=1; f++; break;}
    }
    if(c==0)  printf("i ");
    c=0;
    for(i=0;i<strlen(ch);i++)
    {
        x=ch[i];
        
        if(x==111) { c=1 ; f++; break; }
    }
    if(c==0)  printf("o ");
    c=0;
    for(i=0;i<strlen(ch);i++)
    {
        x=ch[i];
        
        if(x==117) { c=1; f++; break;}
    }
    if(c==0)  printf("u ");
    if(f==5)  printf("0");
}