#include<stdio.h>
int main()
{
char a[50]={"helloworld.123"};
int i;
for(i=0;i<=0;i++)
{
if((a[i]>97&&a[i]<122)||(a[i]>1&&a[i]<100))
{
printf("yes");
}
else
{
printf("no");
}
}
return 0;
}
