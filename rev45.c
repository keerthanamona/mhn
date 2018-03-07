#include<stdio.h>
int main()
{
int n=23,rev,re;
while(n!=0)
{
re=n%10;
rev=rev*10+re;
n=n/10;
}
printf("%d",rev);
return 0;
}
