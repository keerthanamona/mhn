#include<stdio.h>
int main()
{
int n,c;
printf("enter the number");
scanf("%d",&c);
switch(c)
{
case 1:
printf("one\n");
break;
case 2:
printf("second");
break;
case 3:
printf("third");
break;
default:
printf("invalid num");
break;
}
return 0;
}
