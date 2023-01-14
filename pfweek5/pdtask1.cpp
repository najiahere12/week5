#include <iostream>
using namespace std;

float volinUnit(float v,string unit);

main()
{

  float length;
  float width;
  float height;
  string unit;
  float finalvol;
  float v;
  
  
  cout<<"Enter length: ";
  cin>>length;
  cout<<"Enter width: ";
  cin>>width;
  cout<<"Enter height: ";
  cin>>height;
  cout<<"Enter units: ";
  cin>>unit;
  v = (length*width*height)/3;
    float volume =volinUnit(v,unit);
    cout<<volume;
  
  
  volinUnit(v,unit);
  
}

float volinUnit(float v,string unit)

{

       string centimeter;
       string kilometer;
       string milimeter;
       string meter;
     
       string length;
       string width;
       string height;
       float finalvol;
       
       
       
      
       

     if(unit=="centimeter")
       {

       finalvol = v*1000000;
       return finalvol;
       }

     if(unit=="meter")
       {

       return v;


       }

     if(unit=="kilometer")
       {

       finalvol = v/1000000000;
       return finalvol;


       }

    if(unit=="milimeter")
    {

       finalvol = v*1000000000;
       return finalvol;


    }




    return 0;






}