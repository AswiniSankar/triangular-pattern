/*
6
26 27 28 29 30 31 
21 22 23 24 25   
17 18 19 20     
14 15 16       
12 13         
11        
*/
#include<stdio.h>
int main()
{
  int n,num=0,i,j,k,t;
  scanf("%d",&n);

  for(i=n;i>=1;i--)
  {  num=0;
      for(k=i;k>1;k--)
        num+=k;
     t=num+11-i+1;
   for(j=1;j<=n;j++)
    {
      if(i>=j)
       {printf("%d ",t);
        t++;
       }
       else
         printf("  ");
    }
   printf("\n");
  }
}
/*
5
25 24 23 22 21 
20 19 18 17   
16 15 14     
13 12       
11     

*/
#include<stdio.h>
int main()
{
  int n,num=0,i,j,k,t;
  scanf("%d",&n);

  for(i=n;i>=1;i--)
  {  num=0;
      for(k=i;k>1;k--)
        num+=k;
     t=num+11;
   for(j=1;j<=n;j++)
    {
      if(i>=j)
       {printf("%d ",t);
        t--;
       }
       else
         printf("  ");
    }
   printf("\n");
  }
}
/*
5
E D C B A 
E D C B   
E D C     
E D       
E  
*/
#include<stdio.h>
int main()
{
  int n,num=0,i,j,t=0;
  scanf("%d",&n);

  for(i=n;i>=1;i--)
  { t=n;
   for(j=1;j<=n;j++)
    {
      if(i>=j)
       {printf("%c ",t+64);
         t--;
       }
       else
         printf("  ");
    }
   printf("\n");
  }
}
/*
5
               
            * 
         * * 
      * * * 
   * * * * 
* * * * * 
   * * * * 
      * * * 
         * * 
            * 
*/
#include<stdio.h>
int main()
{
  int n,i,j;
  scanf("%d",&n);

  for(i=0;i<(n*2);i++)
  {
   for(j=0;j<n;j++)
    {
      if((i+j)>n-1 && i<=n)
       {printf("* ");
       }
       else if(i>n && (i%n)<=j)
        printf("* ");
       else
         printf("   ");
    }
   printf("\n");
  }
}
/*
5
     
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
*/
#include<stdio.h>
int main()
{
  int n,i,j;
  scanf("%d",&n);

  for(i=0;i<(n*2);i++)
  {
   for(j=0;j<n;j++)
    {
      if((i+j)>n-1 && i<=n)
       {printf("* ");
       }
       else if(i>n && (i%n)<=j)
        printf("* ");
       else
         printf(" ");
    }
   printf("\n");
  }
}
/*
5
     
     * 
    *  * 
   *  *  * 
  *  *  *  * 
 *  *  *  *  * 
  *  *  *  * 
   *  *  * 
    *  * 
     * 
*/
#include<stdio.h>
int main()
{
  int n,i,j;
  scanf("%d",&n);

  for(i=0;i<(n*2);i++)
  {
   for(j=0;j<n;j++)
    {
      if((i+j)>n-1 && i<=n)
       {printf(" * ");
       }
       else if(i>n && (i%n)<=j)
        printf(" * ");
       else
         printf(" ");
    }
   printf("\n");
  }
}
/*
5
          
         * 
       *  * 
     *  *  * 
   *  *  *  * 
 *  *  *  *  * 
   *  *  *  * 
     *  *  * 
       *  * 
         * 
*/
#include<stdio.h>
int main()
{
  int n,i,j;
  scanf("%d",&n);

  for(i=0;i<(n*2);i++)
  {
   for(j=0;j<n;j++)
    {
      if((i+j)>n-1 && i<=n)
       {printf(" * ");
       }
       else if(i>n && (i%n)<=j)
        printf(" * ");
       else
         printf("  ");
    }
   printf("\n");
  }
}
/*
5
        * 
      *   
    *   * 
  *   *   
*   *   * 
  *   *   
    *   * 
      *   
        * 
*/          

#include<stdio.h>
int main()
{
  int n,i,j;
  scanf("%d",&n);

  for(i=0;i<(n*2);i++)
  {
   for(j=0;j<n;j++)
    {
      if((i<n) && (((i+j)==n-1  ||((i+j)>n-1 && i%2==0 && j%2==0) || ((i+j)>n-1 && i%2!=0 && j%2!=0))))
       {printf("* ");
       }
      else if((i>=n) && (((i%n)<j  && i%2==0 && j%2==0) || ((i%n)<j  && i%2!=0 && j%2!=0)) )
        printf("* ");
    }
   printf("\n");
  }
}
/*
5
* 
  * * 
    * * * 
      * * * * 
        * * * * * 
      * * * * 
    * * * 
  * * 
* 

*/

#include<stdio.h>
int main()
{
  int n,i,j,k;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {for(j=0;j<i;j++)
    printf("  ");
   for(k=0;k<=i;k++)
     printf("* ");
   printf("\n");
  }
   for(i=n;i>1;i--)
  {for(j=2;j<i;j++)
    printf("  ");
   for(k=1;k<i;k++)
     printf("* ");
   printf("\n");
  }
}

       else
         printf("  ");
