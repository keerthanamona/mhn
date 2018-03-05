#include<stdio.h>
int main()
{
    int n[4]={1,2,3,4};
    int k=2,i;
    for(i=0;i<=4;i++)
    {
        if(n[i]==k)
        {
            printf("%d",n[i]);
        }
    }
    return 0;
}
