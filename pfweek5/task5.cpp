#include<iostream>
using namespace std;

main()
{
 int hours,minutes,minute15,totalminutes,totalhours;
 
 cout << "Enter hours:  ";
 cin >> hours;
 cout << "Enter minutes:  ";
 cin >>minutes;
 

 minute15 =minutes+15;
 if(minute15 > 59)
 {
  totalminutes = minute15-60;
  totalhours = hours+1;
  if(totalhours == 24)
  { 
   totalhours = 0;
  }
  cout << totalhours << ":" << totalminutes;
 }
 if(minute15 < 59)
 {
  totalminutes = minute15;
  totalhours = hours;
  if(totalhours == 24)
  { 
   totalhours = 0;
  }
  cout << totalhours << ":" << totalminutes;
 }
 
}