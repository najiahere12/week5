#include <iostream>
using namespace std;
 void fivetimes(int number);
main()
{
  int number;
  cout<<"enter number";
  cin>>number;
  fivetimes(number);

  
}
void fivetimes(int number)
  { 
    int result;
    result = number*5;
    cout<<"five times of entered number is:  "<<result;
  }
