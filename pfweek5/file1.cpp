#include <iostream>
using namespace std;
int isgreater(int number1, int number2);
int isminimum(int number1, int number2);

main()
{
 int result;
 int number1;
 int number2;
 cout<<"enter number 1: ";
 cin>>number1;
 cout<<"enter number 2: ";
 cin>>number2;
 result =  isgreater(number1,number2);
cout<<"the greater number is: "<<result<<endl;
result = isminimum(number1,number2);
cout<<"the minimum number is: "<<result<<endl;
 
}

int isgreater(int number1,int number2)
{

if(number1>number2)
  { 
    return number1;
  }

if(number1<number2)
  { 
    return number2;
  }


  return 0;
}


int isminimum(int number1, int number2)
{


if(number1>number2)
  { 
    return number2;
  }

if(number1<number2)
  { 
    return number1;
  }


  return 0;
 }


































