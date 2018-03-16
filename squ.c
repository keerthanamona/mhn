#include<stdio.h>
int main()
{
int a=19,re,s,su=0;
while(a!=0)
{
re=a%10;
s=re*re;
su=su+s;
a=a/10;
}
printf("%d",su);
return 0;
}
