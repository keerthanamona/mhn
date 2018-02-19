#include<stdio.h>
int main()
{
void swap();
swap();
return 0;
}
void swap()
{
int a=99,b=44;
a=a^b;
b=b^a;
a=a^b;
printf("after swap\t%d\t%d",a,b);
}
