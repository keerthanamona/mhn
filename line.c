#include  <stdio.h>                                         
   int main( )                                                     
   {                                                           
       char  l[81]={"hello world"}, ch;                              
       int   c;                                                
       c = 0;                                                       
       do                                                      
       {                                                       
           ch = getchar();                              
           l[c]   = ch;                              
           c++;                                                
       }                                                       
       while(ch != '\n');                                
       c = c - 1;                                              
       l[c] = '\0';                                         
       printf("\n%d\n", c);    
return 0;                             
   }                                                           
