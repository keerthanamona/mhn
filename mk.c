#include<stdio.h>
int main()
{
    int ku[4]={1,2,3,4};
    int m=2,i;
    for(i=0;i<=4;i++)
    {
        if(ku[i]==m)
        {
            printf("%d",ku[i]);
        }
    }
    return 0;
}
