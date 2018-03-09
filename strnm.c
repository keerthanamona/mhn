#include <stdio.h>
#include<string.h>
int main() 
{
	char s[50]={"  i    love  c"};
int l;
l=strlen(s);
for(i=1;i<=l;i++)
{
if(s[i]=='   ')
{
print("%c",s[i+1]);
}
else
{
break;
}
}
return 0;
}
