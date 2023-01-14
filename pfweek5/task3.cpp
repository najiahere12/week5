#include <iostream>
using namespace std;

int symmetry(int num1);

 main()
{
  int num1;
  

  cout<<"enter number :  ";
  cin>>num1;

  symmetry(num1);
}

int symmetry(int num1)
{
   int num2;
   int num3;
   int mod;
   int number;
   int mod2;
   int number2;
   int number3;
   int mod3;

   mod = num1%10;
   number = num1/10;

   mod2 = number%10;
   number2 = number/10;

   mod3 = number2%10;
   number3=number2/10;

if(mod==mod3)
  {
    cout<<" true";


  }

  

 if(mod != mod3)
  {

    cout<<"false";
  }


return 0;

}