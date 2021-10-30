#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main() {

int status = 0;
printf("parent id is: %d\n\n", (int)getpid());
pid_t pid = fork();

if(pid == 0)
{
    printf("child id is: %d and parent id is %d\n",getpid(),getppid());
    exit(1);
}
else
{
    pid_t childPid = wait(&status);
    int childReturnValue = WEXITSTATUS(status);
    printf("parent knows child %d finished with return value %d\n\n", (int) childPid, childReturnValue);

    pid_t pid = fork();
    if (pid == 0)
    {
        printf("child id is: %d and parent id is %d\n", getpid(), getppid());
        pid = fork();
        if (pid == 0)
        {
            printf("child id is: %d and parent id is %d\n",getpid(),getppid());
            exit(3);
        }
        else
        {
            pid_t childPid = wait(&status);
            int childReturnValue = WEXITSTATUS(status);
            printf("parent knows child %d finished with return value %d\n\n", (int) childPid, childReturnValue);
        }
        exit(2);
    }
    else
    {
        pid_t childPid = wait(&status);
        int childReturnValue = WEXITSTATUS(status);
        printf("parent knows child %d finished with return value %d\n\n", (int) childPid, childReturnValue);
    }
}

return 0;
}
