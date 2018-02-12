#include<stdio.h>
int main()
{
    int m,a,p=1;
    printf("enter the number");
    scanf("%d",&m);
    while(m>0)
    {
        a=m%10;
        m=m/10;
        p=p*a;
    
    }
    printf("product of value%d",p);
    return 0;
}
