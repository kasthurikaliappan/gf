#include<stdio.h>
int main()
{
int num,m=20,n=40;
printf("print the odd values in the range");
for(num=m;num<=n;num++)
{
if(num%2==1)
printf("%d",num);
}
return 0;
}
