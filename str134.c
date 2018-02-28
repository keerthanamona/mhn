#include<stdio.h>
#include<string.h>
void main()
{
    char str3[10];
    int m,i;
    scanf("%s",str3);
    scanf("%d",&m);
    int l=strlen(str3);
    for(i=0;i<m;i++)
    {
   printf("%c",str3[i]);
    }
    return 0;
         
}
