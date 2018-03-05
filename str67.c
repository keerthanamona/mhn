#include <stdio.h>
#include<string.h>
int main(void) 
{
    char a[10];
	int n,r,r1=0;
	printf("enter the  string:");
	scanf("%s",a);
 n=strlen(a);
	while(n!=0)
	{
		r=n%10;
		r1=(r1*10)+r;
		n=n/10;
	}
	n=r1;
	while(n!=0)
	{
		r=n%10;
		if(r%2==1)
		{
		printf("%s ",n);
		}
		n=n/10;
	}
	return 0;

}
