#include <stdio.h>
#include<string.h>
int main() 
{
	char s[50];
	int i,m;
	printf("\nenter the  string:\n");
	scanf("%s",s);
	m=strlen(s);
	for(i=0;i<m;i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			printf("%c",s[i]);
		}
	}
	return 0;
}
