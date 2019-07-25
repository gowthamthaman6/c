
#include <stdio.h>

int main()
{
int a[10],n,s,f,i;
scanf("%d",&n);
for (i=0;i<n;i++)
    scanf("%d",&a[i]);
scanf("%d",&s);
f=0;
for (i=0;i<n;i++)
    if (a[i]==s)
    {
        f=1;
        break;
    }
if (f==1)
    printf("%d is found",s);
else 
    printf("%d is not found",s);
    
}
