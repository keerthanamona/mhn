#include<stdio.h>
int main()
{
int y=5,x=10,i,l,n;
for(i=1;i<=y&&i<=x;i++)
{
if(y%i==0&&x%i==0)
{
n=i;
}
}
l=(y*x)/n;
printf("%d\t%d\n%d",y,x,l);
return 0;
}
