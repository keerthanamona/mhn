#include<stdio.h>
#include<string.h>
int main()
{
char a[15];
int i,len,c;
scanf("%c",a);
len=strlen(a);
for(i=0;i<len;len++)
{
if(a[i]==' ')
{
c++;
}
printf("%d",c+1);
return 0;
}

