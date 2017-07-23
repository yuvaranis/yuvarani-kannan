#include <iostream>
       using namespace std;

       int main()
       {
           int num, sum=0, i;
           
           cout<<"Enter any number : ";
           cin>>num;
           
           {for(i=0; i<=num; i++)
           sum+=i;
           }
           
           cout<<"Sum of all numbers up to "<<num<<" is "<<sum << endl;
           
           system("pause");
       return 0;
           }
