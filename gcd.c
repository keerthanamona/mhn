#include<stdio.h>
int main()
{
int d=5,c=10,i,g;
for(i=1;i<=d&&i<=c;i++)
{
if(d%i==0&&c%i==0)
{
g=i;
}
}
printf("%d\t%d\n%d",d,c,g);
return 0;
}
