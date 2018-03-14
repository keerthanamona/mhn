#include<stdio.h>
int main()
{
int n=234,r,r1=0;
while(n!=0)
{
r=n%10;
r1=r1*10+r;
n=n/10;
}
printf("%d",r1);
return 0;
}
