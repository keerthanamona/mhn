#include<stdio.h>
int main()
{
int l=5,w=7,h=9;
int a=0,c,e,f,d,m,n;
a=l*w;
c=2*a;
d=w*h;
e=2*d;
f=h*l;
m=2*f;
n=c+e+m;
printf("%d\n",n);
void vol(int l,int w,int h);
vol(l,w,h); 
return 0;
}
void vol(int l,int w,int h)
{
int b;
b=l*w*h;
printf("%d",b);
}
