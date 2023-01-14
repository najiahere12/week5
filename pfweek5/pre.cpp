#include <iostream>
#include <cmath>
using namespace std;
int max(int num1,int num2);


main()
{
int num1;
int num2;
int result;
cout<<"enter number: ";
cin>> num1;
cout<<"enter number 2: ";
cin>> num2;

result = max(num1,num2);

}

int max(int num1,int num2)
{
 if(num1>num2)
  {
    cout<<"number1 is maximum"<<endl;
   }
   
 if(num2>num1)
  {
    cout<<"number2 is maximum";
   }
 return 0;
}