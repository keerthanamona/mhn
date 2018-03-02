#include<stdio.h>
int main()
{
int a,b,d,e,c,f;
int i,n=2;
for(i=1;i<=n;i++)
{
scanf("%d%d",&a,&b);
c=a/b;
scanf("%d%d",&d,&e);
f=d%e;
printf("%d\n",c);
printf("%d\n",f);
}
return 0;
}
