#include<stdio.h>
main()
{
char name[21];
int i;
scanf("%s",&name);
for(i=0;name[i]!='\0';i++)
{
name[i]=name[i]+1;
}
printf("encrypted string=%s",name);
}
