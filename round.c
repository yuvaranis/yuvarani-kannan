#include<stdio.h>
int main(void)
{
  float v;
  int con, r_value, mul;
  printf("Please enter a value to be rounded: ");
  scanf("%f", &v);
  mul=v*10;
  con=mul%10;
  r_value=mul/10;
  if(con>=5)
  r_value=r_value+1;
  else 
  r_value=r_value;
  printf("The rounded value is %.2d", r_value);

  return 0;
}

