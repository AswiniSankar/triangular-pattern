/*
1
5 2
8 6 3
10 9 7 4
*/
#include<stdio.h>
int main()
{
 int n,i,j,s=0,t,s1;
 scanf("%d",&n);
 t=n;
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
  {
   if(j==1 && i==1)
    printf("1");
   else if(j==1)
   {
     s1=s+t-1+i;
     printf("%2d",s1);
     s=s+t-1;;
   }
   else
    printf("  ");
  }
  printf("\n");
 }
 printf("\n");
 return 0;
}
