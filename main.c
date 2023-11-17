#include <stdio.h>
#include <stdlib.h>
#define EMIR 10
int main()
{
   int i,j;
   printf("%4c",'I');
   for(i=1;i<=EMIR;i++)
   {
       printf("%4d",i);
   }
   printf("\n");
   printf("-------");
   for(i=1;i<EMIR;i++)
   {
    printf("----");
   }
   printf("\n");
   for(i=1;i<=EMIR;i++)
   {
       printf("%d",i);
       for(j=1;j<=EMIR;j++)
       {
           printf("%4d",i*j);
       }
       printf("\n");
   }
}
