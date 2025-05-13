#include <stdio.h>

int main()
{
    int n,t1=0, t2 =1, next,i;
    printf("Enter  value for :n");
    scanf("%d",&n);
    printf("Fibonacci series:");
    for (i = 0; i < n; i++)
    {
        if(i <= 1)
          next =t1 + t2;
          else
          {
              next =t1 +t2;
              t1 = t2;
              t2 =next;
             
          }
          printf("%d", next);
    }
    printf("\n");
    return 0; 
    
}
    
