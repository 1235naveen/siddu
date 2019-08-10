#include<stdio.h>
int main()
{
int x,p,a=0;
scanf("%d%d",&x,&p);
p=100-p;
while(x>0)
{
a=a+x;
x=(p*x)/100;
}
printf("%d",a);
return 0;
}
