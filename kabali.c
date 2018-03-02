#include<stdio.h>
int main()
{
int a,b,n,i,t;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d%d",&a,&b);
t=a-b;
printf("%d\t%d\n",-t);
}
return 0;
}
