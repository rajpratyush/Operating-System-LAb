#include<stdio.h>
int main(void)
{
int i,a=1,h=2,n;
printf("\n Enter the no of jobs:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(a==1)
{
printf("processing %d......! \n", i+1);
a++;
}
if(h>1)
{
if(i+2<=n)
{
printf("\n processing %d.....! \n",i+2);
}
printf("\n Process %d Enters Critical section", i+1);
printf("\n Process %d Leaves Critical section", i+1);
}
h+1;
}
return 0;
}
