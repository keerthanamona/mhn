#include<stdio.h>
#include<string.h>
int main()
{
char str[50]={"super"};
int i,l;
scanf("%s",str);
l=strlen(str);
for(i=0;str[i]!='/0';i++)
{
printf("%s",str[l]);
}
return 0;
}
