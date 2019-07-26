#include<stdio.h>
main()
{
int n,sum=0,c,r;
scanf("%d",&n);
while(n>0)
{
r=n%10;
c=r*r*r;
sum=sum+c;
n=n/10;
}
printf("%d",sum);
if (n==sum)
    printf("yes");
else
    printf("No");

}
