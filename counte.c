#include<stdio.h>
int main()
{
int n[4]={4,3,3,5},k=3,i;
int count=0;
for(i=0;n[i]!=0;i++)
{
if(n[i]/2==1)
{
if(n[i]==k)
{
printf("%d",n[i]);
}
}
}
return 0;
}
