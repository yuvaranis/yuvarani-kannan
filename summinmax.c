#include <stdio.h>

int main(void)

{ 
 float temp;
 int val,i,j,k;

 double sum = 0;

 double number[val];

 printf("Enter the number of values: ");

 scanf("%d", &val);

 double number[val];

 for(i=1; i <= val ;i++)

 { 

  printf("enter a value: ");

  scanf("%lf", &number[i]);

  sum = sum + number[i];

 }

 for(i=1;i<=val;i++)

{


 for(j=i+1;j<=val;j++)

  {

   if(number[i] > number[j])

   { 

    temp=number[i];

    number[i]=number[j];

    number[j]=temp;

    }


}


 }

 printf("Sum = %.lf\n", sum);


 printf ("Maximum element: %f\n",number[val]);  


        printf ("Minimum element: %lf\n", number[1]);  

}
