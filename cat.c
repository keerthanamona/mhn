#include<stdio.h>
#include<string.h>
int main()
{
    char str[10],i,j;
    char str1[10];
    printf("enter the f str");
    scanf("%c",str[i]);
    printf("enter the s str");
    scanf("%c",str1[j]);
   for(i=0;str!='\0';++i)
   {
   for(j=0;str1!='\0';++j,++i)
   {
       str[i]=str1[j];  
       }
       str[i]='\0';
       printf("%c",str[i]);
   }
return 0;
}
