#include<stdio.h>
int main()
{
int b[10]={1,4,6,7,8,10,5,9,3,2},i,g=10;
g=b[0];
for(i=0;i<10;)
{
if(b[i]>g)
{
g=b[i];
printf("%d",g);
}
}
return 0;
}
