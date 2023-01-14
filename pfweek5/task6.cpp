#include <iostream>
using namespace std;


int printwordsunit(int a,int b,int num);
main()
{
int num;
 int a;
 int b;
 cout<<"enter number:  ";
 cin>>num;
 printwordsunit(a,b,num);



}

int printwordsunit(int a,int b,int num)
{

    b=num%10;
    a = num/10;
 if(a==2)
  {
  cout<<"twenty";
  }

  if(a==3)
  {
cout<<"thirty";

  }

  if(a==4)
  {
cout<<"forty";

  }

  if(a==5)
  {
cout<<"fifty";

  }


  if(a==6)
  {
cout<<"sixty";

  }

  if(a==7)
  {
cout<<"seventy";

  }

  
  if(a==8)
     {
      cout<<"eighty";

      }



  if(a==9)
    {
     cout<<"ninety";

 }
 if(b==1)
  {
  cout<<"one";
  }


 if(b==2)
  {
  cout<<"two";
  }

  if(b==3)
  {
cout<<"thirty";

  }

  if(b==4)
  {
cout<<"four";

  }

  if(b==5)
  {
cout<<"five";

  }


  if(b==6)
  {
cout<<"six";

  }

  if(b==7)
  {
cout<<"seven";

  }

  
  if(b==8)
     {
      cout<<"eight";

      }



  if(b==9)
    {
     cout<<"nine";

 }

   return 0;

}
