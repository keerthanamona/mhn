#include <stdio.h>
int main(void) 
{
int a[50];
	int i,flag=0;
	printf("\nenter the num:");
	scanf("%d",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==a[i+1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}
	return 0;
}
