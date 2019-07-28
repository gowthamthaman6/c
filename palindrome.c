#include<stdio.h>
#include<string.h>
main()
{
char a[20],ch;
int i,count;
scanf("%c",&ch);
fflush(stdin);
gets(a);
{
count=0;
for(i=0;a[i]!='\0';i++)
{
if(a[i]==ch)
count++;
}
}
printf("the count is %d",count);
}
