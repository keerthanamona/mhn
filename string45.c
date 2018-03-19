#include<stdio.h>
#include<string.h>
int main()
{
char a[5]={"apple"};
int i;
for(i=0;a[i]!='\0';i++)
{
printf("%s,%s",a[0],a[3]);
}
return 0;
}
