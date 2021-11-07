#include<stdio.h>
#include<unistd.h>
int main(void)
{
int ret;
ret=fork();
if(ret>0)
{
printf("\n Am Parent ");
printf("\n My PID is %d",getpid());
}
if(ret==0)
{
printf("\n Am Child ");
printf("\nMy PID is %d",getpid());
printf("\nMy parent PID is %d ",getppid());

}
return 0;
}
