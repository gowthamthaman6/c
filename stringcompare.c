#include<stdio.h>
main()
{
char str1[20],str2[20];
scanf("%s%s",&str1,&str2);
if (strcmp(str1,str2)==0)
{
   printf("same"); 
}
else
    printf("not same");

}
