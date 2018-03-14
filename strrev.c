#include<stdio.h>
#include<string.h>
int main()
{
char s[50]={"abcd"};
int l,i,t=0;
l=strlen(s);
if(l%2==0)
{
for(i=0;i<=l;i++)
{
t=s[i];
s[i]=s[i+1];
s[i+1]=t;
}
printf("%s",s);
}
else
{
for(i=0;i<=l-1;i++)
{
t=s[i];
s[i]=s[i+1];
s[i+1]=t;
}
printf("%s",s);
}
return 0;
}
