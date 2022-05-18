#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,l=0;
    char ch[100];
    scanf("%[^
]s",&ch);
    for(i=0; ch[i]!=0; i++)
    {
        if(ch[i]>='a' && ch[i]<='z')
        {
         l++;
        }
    }
printf("%d",l);
    return 0;
}