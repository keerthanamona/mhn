#include<stdio.h>
int main()
{
int a[10]={1,6,4,8,4,9,10},i;
for(i=0;a[i]!=0;i++)
{
if(a[i]>9)
{
printf("%d",a[i]);
}
}
return 0;
}
