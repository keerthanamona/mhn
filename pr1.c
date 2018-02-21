#include<stdio.h>
int main()
{
void add(int a,int b);
int a=9,b=2;
add(a,b);
}
void add(int a,int b)
{
int c;
c=a+b;
if(c%2==0)
{
printf("even\n");
}
else
{
printf("odd\n");
}
return 0;
}
