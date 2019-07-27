#include<stdio.h>
main()
{
int lower,upper,i,flag;
scanf("%d",&lower);
scanf("%d",&upper);
while(lower<upper)
{
flag=0;
for(i=2;i<lower/2;i++)
{
    if(lower%i==0)
 {
    flag=1;
    break;
}
}
}
if(flag==0)
{
 printf("%d",lower);
 ++lower;
}
}

