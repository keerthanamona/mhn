#include <stdio.h>

int main(void) 
{
	int n,r,r1=0;
	printf("enter the number:");
	scanf("%d",&n);
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
		printf("%d ",r);
		}
		n=n/10;
	}
	return 0;

}
