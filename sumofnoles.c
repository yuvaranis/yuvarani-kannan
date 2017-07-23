 
#include<stdio.h>
#include<conio.h>
void main()
{
   int i, sum=0;
   clrscr();
   printf("All nos. between 100 - 200 which is divisible by 7\n");
   for(i=101;i<200;i++)
   {
     if(i%7==0)
     {
       printf("%5d",i);
       sum+=i;
     }
   }
   printf("\n\nsum = %d",sum);
   getch();
}
