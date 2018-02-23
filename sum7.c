#include<stdio.h>
int main()
{
int n[10]={1,2,3,1},a=0,i;
for(i=0;n[i]!=0;i++)
{
if(a==0)
{
a=n[0]+n[1]+n[2]+n[3];
printf("%d",a);
}
}
return 0;
}
