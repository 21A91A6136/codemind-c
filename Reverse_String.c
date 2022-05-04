#include<stdio.h>
int main()
{
	char str[1000];
	scanf("%[^
]s",str);
	int i,j,len,temp;
	for(i=0;str[i]!=NULL;i++);
		 len=i;
		 i=0;
		 j=len-1;
	while(i<j)
	{
		temp=str[j];
		str[j]=str[i];
		str[i]=temp;
		i++;
		j--;
	}
	printf("%s",str);
}