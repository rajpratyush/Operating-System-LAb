#include <stdio.h> 
#include <pthread.h> 
#include <semaphore.h> 
#include <unistd.h> 
  
 
int main() 
{ 
    int i,a=0,h=2,n;
    printf("\n enter no of process");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(;a<n;a++)
        
         {
             printf("process %d in queue \n",a+1);
             
             
         }
    a++;
    if(h>1)
    {
        if(i+2<=n+1)
        {
            printf("\nprocessing %d\n",i+1);
            sleep(2);
        }
        printf("\nprocess %d enters critical section\n",i+1);
        sleep(2);
        printf("process %d leaves critical section \n",i+1);
        sleep(2);
    }
    
    n+1;
  }
} 
