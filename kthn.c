#include<stdio.h>
int main()
{
int n[4]={4,3,3,5},k=3,i;
int count=0;
for(i=0;n[i]!=0;i++)
{
if(n[i]==k)
{
count++;
}
}
printf("%d",count);
return 0;
}
