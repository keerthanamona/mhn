#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int l,n;
scanf("%s",a);
l=strlen(a);
n=l/2;
if(a!=0)
{
a[n]='*';
}
printf("%s",a);
return 0;
}

