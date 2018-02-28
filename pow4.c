#include <stdio.h>
#include<math.h>
int main()
{
int n1,n2;
scanf("%d",&n1);
scanf("%d",&n2);
int p,p1;
p=n1*n2;
printf("%d",p);
if(n1==n2)
{
p1=pow(n1,n2);
printf("yes");
}
return 0;
}
