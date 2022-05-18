#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,u=0;
    char ch[100];
    scanf("%[^
]s",&ch);
    for(i=0; ch[i]!=0; i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
        {
         u++;
        }
    }
printf("%d",u);
    return 0;
}