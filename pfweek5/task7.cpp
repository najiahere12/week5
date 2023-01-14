#include <iostream>
using namespace std;

float calculation(float vol,float p1,float p2,float hours);

main()
{
  float vol;
  float p1;
  float p2;
  float hours;

 cout<<"Enter volume of pool:  ";
 cin>>vol;
 cout<<"Enter flow rate of first pipe:  ";
 cin>>p1;
 cout<<"Enter flow rate of second pipe:  ";
 cin>>p2;
 cout<<"Enter hours for which the worker left:  ";
 cin>>hours;
 calculation(vol, p1, p2,hours);

}

float calculation(float vol,float p1,float p2,float hours)
{

float water;
float iff1;
float iff2;
float rp1;
float rp2;
float overflow;
float p11;
float p22;
float watter;

 rp1 = p1*hours;
 rp2 = p2*hours;
 water = rp1+rp2;
 p11 = (rp1*100)/water;
 
 p22 = (rp2*100)/water;
 
 watter = (water*100)/vol;
if(water<vol)
    {
       
       cout<<"the pool is  fill :   "<<watter<<endl;
       cout<<" pipe 1 contribution :   "<<p11<<endl;
       cout<<" pipe 2 contribution :   "<<p22<<endl; 

    }



    if(water>vol)
    {  
        overflow = water-vol;
       
       cout<<"the pool overflowed  :   "<<overflow<<endl;
      

    }

return 0;

}