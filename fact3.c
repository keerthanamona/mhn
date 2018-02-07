include<stdio.h>
int main()
{
int n,fact,n1,i;
printf("enter the fibonacci series");
scanf("%d",&n);
for(i=0;i<10;i++)
{
fact=n1+n;
n1=n;
n=fact;
printf("fact no is",fact);
}
return 0;
}
