#include<stdio.h>
main()
{
char names[5][20];
int i;
for (i=0;i<5;i++)
scanf("%s",names[i]);
for(i=0;i<5;i++)
printf("%s\n",names[i]);
}
