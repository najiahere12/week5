#include <iostream>
using namespace std;
void check(char a);
main()
{

     char a='a';
     cout<<"enter alphabet:  ";
     cin>>a;
     check(a);

 }

void check(char a)
  {
    if(a=='A')
     {
      cout<<"Entered Alphabet is capital";

     }



    if(a=='a')
    {
      cout<<"Entered Alphabet is small";

    }
}