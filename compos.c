#include<stdio.h>
int main(void)
{
int n,i,fg=0;
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
fg=1;
break;
}
}
if(fg==0)
{
printf("\n no");
}
else
{
printf("\n yes");
}
return 0;
}
