#include<stdio.h>
int main()
{
    int m=5,a=6,t=0;
    printf("before swap\t%d\t%d\n",a,m);
    while(t==0)
    {
        t=a;
        a=m;
        m=t;
        
    }
    printf("swap of value\t%d\t%d",a,m);
    return 0;
}
