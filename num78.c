#include <stdio.h>

int main(void) 
{ int a[50],t[50];
	int i,k,j;
	printf("\nenter the num:");
	scanf("%[^\n]d",a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]>a[j])
			{
				t[k]=a[i];
				a[i]=a[j];
				a[j]=t[k];
		}	}
	}
	printf("\n%d",a);
	return 0;
}
