/*
ip:7

op:
             1            
           2   2          
         3       3        
       4           4      
     5               5    
   6                   6  
 7 6 5 4 3 2 1 2 3 4 5 6 7
*/
#include<stdio.h>
int main()
{
  int n,i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {for(j=0;j<n;j++)
   {
      if(j<n-i-1)
        printf("  ");
      else if((i+j==n-1))
       printf("%2d",i+1);
       else if (i==n-1)
        printf("%2d",n-j);
      else
        printf("  ");
   }
   for(j=1;j<n;j++)
   {
      if(j>i)
        printf("  ");
      else if(i==j)
       printf("%2d",i+1);
        else if (i==n-1)
        printf("%2d",n-i+j);
      else
        printf("  ");
   }
   printf("\n");
  }
}
