#include<stdio.h>
int main()
{
     int a[10],n,i,j,c=0,prime[10],t=0,nonprime[10],w=0;
     printf("How Many Numbers You Want To Add in Array\n\nEnter Limit : ");
     scanf("%d",&n);
     printf("\nEnter %d Numbers in Array:\n\n",n);
     for(i=0;i<n;i++)
          scanf("%d",&a[i]);
     for(i=0;i<n;i++)
     {
          c=0;
          for(j=2;j<a[i];j++)
          {
               if(a[i]%j==0)
               {
                    c=1;
                    break;
               }
          }
          if(c==0)
          {
               prime[t]=a[i];
               t++;
          }
        else
        {
               nonprime[w]=a[i];
               w++;
        }
     }
     printf("\nPrime Numbers in Above Array:\n\n");
     for(i=0;i<t;i++)
     {
          printf(" %d ",prime[i]);
     }
        printf("\nnonPrime Numbers in Above Array:\n\n");
     for(i=0;i<w;i++)
     {
          printf(" %d ",nonprime[i]);
     }

     return 0;
}