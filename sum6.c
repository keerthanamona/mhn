#include<stdio.h>
int main()
{
    int b,m,s=0;
    printf("enter the number");
    scanf("%d",&m);
    while(m>0)
    {
        b=m%10;
        m=m/10;
        s=s+b;
    }
    printf("sum of value%d",s);
    return 0;
}
