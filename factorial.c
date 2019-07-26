#include<stdio.h>
main()
{
int i,n,fact;
fact=1;
scanf("%d",&n);
if (n<0)
{
printf("error");
}
else
{
for (i=1;i<n;i++)
{
fact=fact*i;
}
}
printf("%d",fact);
}
