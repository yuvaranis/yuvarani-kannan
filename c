#include<stdio.h>
int main()
{
int num;
printf("enter any number");
scanf("%d",&num);
if(num>0)
{
printf("number is positive number");
}
else if(num<0)
{
printf("number is negative");
}
else
{
printf("number is zero");
}
return 0;
}
