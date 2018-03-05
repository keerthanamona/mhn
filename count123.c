#include<stdio.h>
int main()
{
   int n=2345,c=0;
   while(n!=0)
   {
       n=n/10;
       c++;
   }
   printf("%d",c);
   return 0;
}
