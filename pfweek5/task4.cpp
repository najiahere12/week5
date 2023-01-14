#include <iostream>
using namespace std;
int oddish(int number);

main()
{
 int number;
 cout<<"enter number:  ";
 cin>>number;
 oddish(number);
 
 

}

int oddish(int number)
{
    int sum;
  
    int mod1;
    int num1;
    int mod2;
    int num2;
    int mod3;
    int num3;
    int mod4;
    int num4;
    int mod5;
    int num5;
    

    mod1 = number%10;
    num1 = number/10;

    mod2 = num1%10;
    num2 = num1/10;

    mod3 = num2%10;
    num3 = num2/10;

    mod4= num3%10;
    num4 = num3/10;

    mod5= num4%10;
    num5 = num4/10;

    sum =  mod1+mod2+mod3+mod4 + mod5;
    cout<<sum;

    if(sum%2==0)
    {
     cout<<"evenish";

    }

     if(sum%2!=0)
    {
     cout<<"oddish";

    }
    return 0;

}
 
