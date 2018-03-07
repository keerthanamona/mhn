#include<stdio.h>
int main()
{
int n=7,i;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
break;
}
else
{
printf("yes");
}
}
return 0;
}
