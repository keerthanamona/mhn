#include <stdio.h>

int main() 
{
	int h[4]={1,2,3,4},k=2,i;
scanf("%d",&h);
for(i=1;i<=4;i++)
{
if(h[i]==k)
{
printf("yes");
}
else
{
break;
}
}
return 0;
}
