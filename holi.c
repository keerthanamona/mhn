#include<stdio.h>
#include<string.h>
int main()
{
char str1[10];
scanf("%s",str1);
if(str1=="sunday"&&str1=="saturday")
{
printf("holiday");
}
else
{
printf("working day");
}
return 0;
}

